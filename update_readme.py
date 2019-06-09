#!/usr/bin/env python

''' Simple script to auto-generate the README.md file for a 30 Seconds of C++ project.
    Apply as a git hook by running the following command in linux:
        cd .git/hooks/ && ln -s ../../createtil.py pre-commit && cd -
'''
from __future__ import print_function
import os

EMOJIS = {
  "algorithm": ':sparkles:',
  "stack": ':books:',
  "queue": ':large_blue_circle:',
  "map": ':world_map: ',
  "string": ':red_circle:',
  "list": ':page_with_curl:',
  "vector": ':arrow_upper_right:'
}

HEADER = '''# 30 Seconds of C++
>### 30 Seconds Of Standard Template Library in C++

<p align="center">
    <a href="https://github.com/Bhupesh-V/30-Seconds-of-cpp">
        <img src="https://github.com/Bhupesh-V/30-Seconds-of-cpp/blob/master/logo/new_logo_2.jpg" height=auto weight=100%>
    </a>
    <br>
    <hr>
    <strong>A collection of C++ STL features (functions/libraries) which can be learned in 30 seconds or less</strong>
</p>
<hr>


[![Codacy Badge](https://api.codacy.com/project/badge/Grade/72e93df05bce4d7598f222676bfb511c)](https://app.codacy.com/app/Bhupesh-V/30-Seconds-Of-STL?utm_source=github.com&utm_medium=referral&utm_content=Bhupesh-V/30-Seconds-Of-STL&utm_campaign=Badge_Grade_Dashboard)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg?style=flat-square)](http://makeapullrequest.com)
[![license](https://img.shields.io/badge/license-MIT-orange.svg?style=flat-square)](https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/LICENSE)
[![Build Status](https://travis-ci.org/Bhupesh-V/30-seconds-of-cpp.svg?branch=master)](https://travis-ci.org/Bhupesh-V/30-seconds-of-cpp)
[![CodeFactor](https://www.codefactor.io/repository/github/bhupesh-v/30-seconds-of-cpp/badge)](https://www.codefactor.io/repository/github/bhupesh-v/30-seconds-of-cpp)
[![Open Source Helpers](https://www.codetriage.com/bhupesh-v/30-seconds-of-cpp/badges/users.svg)](https://www.codetriage.com/bhupesh-v/30-seconds-of-cpp)
<hr>
'''

FOOTER = '''## Community
Join other C++ enthusiasts on 
- [Slack](https://join.slack.com/t/30-seconds-of-cpp/shared_invite/enQtNTU0MTYxMDk0MzQxLTlhY2Q1MWZmOTM0ODRmOWMwYTllYzVjMzM2ZDk5NjY3MDU2NDljNDlmMDQ5MTMyOGQyOTVlNzEwOTc0MmYwOWY)
- [Discord](https://discord.gg/KAD3JZq)

## 30 Seconds of Knowledge
> Experience *30 Seconds of C++* as a [Web Extension](https://chrome.google.com/webstore/detail/30-seconds-of-knowledge/mmgplondnjekobonklacmemikcnhklla?hl=en) built by [Stefan Petrovic](https://github.com/petrovicstefanrs)

## Contributors :purple_heart: :tada:
| Name          | Profile       |
| ------------- |:-------------:|
| TANIYA GUPTA    | [thetaniyagupta](https://github.com/thetaniyagupta) |
| Saumya Agnihotri    | [saumyaagnihtori](https://github.com/saumyaagnihtori) |
| shan7030    | [shan7030](https://github.com/shan7030) |
| Sonkeng Maldini |[sdmg15](https://github.com/sdmg15) |
| Pranav Khurana | [Pranav-Khurana](https://github.com/Pranav-Khurana) |
| Rickey Patel | [rickey90](https://github.com/rickey90) |
| Kyle Johnson | [kydojo](https://github.com/kydojo) |
| Timothy Itodo | [itodotimothy6](https://github.com/itodotimothy6) |
| Pankaj Raghav | [Panky-codes](https://github.com/Panky-codes) |

## Special Mention
A big thanks to [Shriam Kaushik](https://github.com/shriamkaushik) for the lovely new logo :heart:

## License

This project is licensed under the MIT License. See the [LICENSE.md](LICENSE) file for details.

## Contributing

Please read the *updated* [CONTRIBUTING.md](CONTRIBUTING.md) for the process for submitting pull requests to us.

'''


def get_list_of_categories():
    ''' Walk the current directory and get a list of all subdirectories at that
    level.  These are the "header directories" in which there are functions.'''
    dirs = [x for x in os.listdir('.') if os.path.isdir(x) and
            '.git' not in x and x != 'snippets' and x != 'logo' ]
    return dirs


def get_title(function_file):
    ''' Read the file until we hit the first line that starts with a #
    indicating a title in markdown.  We'll use that as the title for this
    entry. '''
    with open(function_file) as _file:
        for line in _file:
            line = line.strip()
            if line.startswith('#'):
                return line[1:].lstrip()  # text after # and whitespace


def get_functions(category):
    ''' For a given category, get the list of function() titles. '''
    files = [x for x in os.listdir(category)]
    titles = []
    for filename in files:
        fullname = os.path.join(category, filename)
        if (os.path.isfile(fullname)) and fullname.endswith('.md') and fullname != category + '/README.md':
            title = get_title(fullname)
            titles.append((title, fullname))
    return titles


def get_category_dict(category_names):
    categories = {}
    count = 0
    for category in category_names:
        titles = get_functions(category)
        categories[category] = titles
        count += len(titles)
    return count, categories


def print_file(category_names, count, categories):
    ''' Now we have all the information, print it out in markdown format. '''
    with open('README.md', 'w') as file_:
        file_.write(HEADER)
        file_.write('\n')
        file_.write('''

### Header Files

''')
        # print the list of categories with links
        for category in sorted(category_names):
            file_.write('* [{0}](#{1}) '.format(category,
                                                 category))
            file_.write(EMOJIS[category] + '\n')

        # print the section for each category
        file_.write('''
---

''')
        for category in sorted(category_names):
            file_.write('### {0} '.format(category.capitalize()))
            file_.write('\n')
            file_.write('<details><summary>View contents</summary>\n<ol>\n')
            tils = categories[category]
            for (title, filename) in sorted(tils):
                file_.write('<li><a href="{0}"><code>{1}</code></a></li>\n'.format(filename, title))
            file_.write('\n</ol>\n</details>\n\n')

        file_.write(FOOTER)


def create_readme():
    ''' Create a 30C++ README.md file with a nice index for using it directly
        from github. '''
    category_names = get_list_of_categories()
    count, categories = get_category_dict(category_names)
    print_file(category_names, count, categories)

if __name__ == '__main__':
    create_readme()
    os.system('git add README.md')
