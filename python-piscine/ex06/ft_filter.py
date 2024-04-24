def ft_filter(function, iterable):
    """Return an iterator yielding those items of iterable for which
function(item) is true. If function is None, return the items
that are true."""

    if function:
        return (word for word in iterable if function(word))
    return (word for word in iterable if word)
