function maxN(...)
    valueTable = {}
    for i = 1, #arg do
        table.insert(valueTable, arg[i])
    end

    table.sort(valueTable, function(a, b) return a > b end)
    return valueTable[1]
end