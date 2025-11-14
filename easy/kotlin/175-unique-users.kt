fun main() {
    val n = readln().toInt()

    val uniqueUsers = List(n) { readln() }
        .map { email ->
            val (loginPart, domain) = email
                .split("@")
            loginPart
                .replace(".", "")
                .split("-")[0] to domain.substringBeforeLast(".")
        }
        .toSet()

    println(uniqueUsers.size)
}