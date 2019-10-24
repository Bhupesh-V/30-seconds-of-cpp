template<class InputIt, class OutputIt, class BinaryOperation>
OutputIt adjacent_difference(InputIt first, InputIt last, 
                             OutputIt d_first, BinaryOperation op)
{
    if (first == last) return d_first;
 
    typedef typename std::iterator_traits<InputIt>::value_type value_t;
    value_t acc = *first;
    *d_first = acc;
    while (++first != last) {
        value_t val = *first;
        *++d_first = op(val, std::move(acc)); // std::move since C++20
        acc = std::move(val);
    }
    return ++d_first;
}
