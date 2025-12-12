fun main() {
    val n = readln().toInt()
    val rad_neck = readln().split(" ").map { it.toInt() }.toList()
    val rad_collar = readln().split(" ").map { it.toInt() }.toList()

    var discontent: Int

    var min_discontent = Int.MAX_VALUE
    var min_id = 0

    for (i in 0..<n) {
        discontent = 0

        for (j in 0..<n) {
            val dogIndex = (i + j) % n
            val neck = rad_neck[dogIndex]
            val collar = rad_collar[j]

            discontent += when {
                neck > collar -> 0
                (collar - neck) <= 100 -> (collar - neck) / 2
                else -> 30
            }
        }

        if (discontent < min_discontent) {
            min_discontent = discontent
            min_id = i
        }
    }
    println("${min_id+1} $min_discontent")
}