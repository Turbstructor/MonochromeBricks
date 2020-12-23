function maxN(...)
    valueTable = {}
    for i = 1, #arg do
        table.insert(valueTable, arg[i])
    end

    table.sort(valueTable, function(a, b) return a > b end)
    return valueTable[1]
end

function minN(...)
    valueTable = {}
    for i = 1, #arg do
        if(arg[i] > 0 or arg[i] ~= nil) then
            table.insert(valueTable, arg[i])
        end
    end

    table.sort(valueTable, function(a, b) return a < b end)
    return valueTable[1]
end