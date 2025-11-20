fun main() {
    val n = readln().toInt()
    val commands = List(n){ readln() }
        .map { it.first() }
        .groupBy { it }
        .maxBy { it.value.size }.key
    println(commands)
}

