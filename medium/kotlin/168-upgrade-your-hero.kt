fun main() {
    val n = readln().toInt()
    val items = readln()
        .split(" ")
        .map { it.toInt() }

    val zeros = items.count { it == 0 }
    val positive = items.filter { it > 0 }
    val negative = items.filter { it < 0 }


    val itemToRemove = when {
        zeros > 1 -> 0
        zeros == 1 ->
            if (negative.size % 2 == 0) 0
            else negative.minOrNull() ?: 0

        negative.isEmpty() -> positive.minOrNull()
        positive.isEmpty() ->
            if (negative.size % 2 == 0) negative.minOrNull()
            else negative.maxOrNull()

        negative.size % 2 == 0 -> positive.min()
        else -> negative.max()
    }

    println(itemToRemove)
}

