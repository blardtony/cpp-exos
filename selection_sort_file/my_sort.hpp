// Change me instead
// All occurences of XXX need to be replaced with
// something more meaningful


template<class IT>
void my_selection_sort( IT begin, IT end)
{
    std::cout << "selection sort " << std::endl;
    IT min;
    IT next;
    for (IT i = begin; i != end; ++i)
    {
        min = i;
        next = i; 
        for (IT j = ++next; j != end; ++j)
        {
            // std::cout << " *min= "<< *min << " *j = " << *j << std::endl;
            if (*j < *min)
            {
                min = j;
            }
        }
        // std::cout << " *min= "<< *min << " *i = " << *i << std::endl;
        std::swap(*min, *i);
        // std::cout << " *min= "<< *min << " *i = " << *i << std::endl;
    }
}
