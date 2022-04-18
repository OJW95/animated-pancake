package machine

enum class Elements(var state: Int) {
    WATER(400),
    MILK(540),
    BEANS(120),
    CUPS(9),
    COSTS(550),
    WORK(1)
}

class CoffeeMachine {
    
    fun fillAction() {
        var water = Elements.WATER
        var milk = Elements.MILK
        var beans = Elements.BEANS
        var cups = Elements.CUPS
        var costs = Elements.COSTS
        
        print("Write how many ml of water do you want to add: ")
        water.state += readln().toInt()
        print("Write how many ml of milk do you want to add: ")
        milk.state += readln().toInt()
        print("Write how many grams of coffee beans do you want to add: ")
        beans.state += readln().toInt()
        print("Write how many disposable cups of coffee do you want to add: ")
        cups.state += readln().toInt()
        println()
    }

    fun buyAction() {
        print("What do you want to buy? 1 - espresso, 2 - latte, 3 - cappuccino, back - to main menu: ")
        
        when (readln()) {
            "1" -> {
                var water = Elements.WATER
                var milk = Elements.MILK
                var beans = Elements.BEANS
                var cups = Elements.CUPS
                var costs = Elements.COSTS
                
                water.state -= 250
                beans.state -= 16
                cups.state -= 1
                costs.state += 4
                
                if (water.state >= 0 && beans.state >=0 && cups.state >=0) {
                    println("I have enough resources, making you a coffee!")
                }
                else {
                    if (water.state < 0) {
                        println("Sorry, not enough water!")
                    }
                    if (beans.state < 0) {
                        println("Sorry, not enough beans!")
                    }
                    if (cups.state < 0) {
                        println("Sorry, not enough cups!")
                    }
                    water.state += 250
                    beans.state += 16
                    cups.state += 1
                    costs.state -= 4
                }
            }
            "2" -> {
                var water = Elements.WATER
                var milk = Elements.MILK
                var beans = Elements.BEANS
                var cups = Elements.CUPS
                var costs = Elements.COSTS
                
                water.state -= 350
                milk.state -= 75
                beans.state -= 20
                cups.state -= 1
                costs.state += 7
                
                if (water.state >= 0 && milk.state >= 0 && beans.state >=0 && cups.state >=0) {
                    println("I have enough resources, making you a coffee!")
                }
                else {
                    if (water.state < 0) {
                        println("Sorry, not enough water!")
                    }
                    if (milk.state < 0) {
                        println("Sorry, not enough milk!")
                    }
                    if (beans.state < 0) {
                        println("Sorry, not enough beans!")
                    }
                    if (cups.state < 0) {
                        println("Sorry, not enough cups!")
                    }
                    water.state += 350
                    milk.state += 75
                    beans.state += 20
                    cups.state += 1
                    costs.state -= 7
                }
            }
            "3" -> {
                var water = Elements.WATER
                var milk = Elements.MILK
                var beans = Elements.BEANS
                var cups = Elements.CUPS
                var costs = Elements.COSTS
                
                water.state -= 200
                milk.state -= 100
                beans.state -= 12
                cups.state -= 1
                costs.state += 6
                
                if (water.state >= 0 && milk.state >= 0 && beans.state >=0 && cups.state >=0) {
                    println("I have enough resources, making you a coffee!")
                }
                else {
                    if (water.state < 0) {
                        println("Sorry, not enough water!")
                    }
                    if (milk.state < 0) {
                        println("Sorry, not enough milk!")
                    }
                    if (beans.state < 0) {
                        println("Sorry, not enough beans!")
                    }
                    if (cups.state < 0) {
                        println("Sorry, not enough cups!")
                    }
                    water.state += 200
                    milk.state += 100
                    beans.state += 12
                    cups.state += 1
                    costs.state -= 6
                }
            }
            "back" -> {
                
            }
        }
        println()
    }

    fun takeAction() {
        var costs = Elements.COSTS
        
        println("I gave you $$costs")
        costs.state = 0
        println()
    }

    fun remainingAction() {
        var water = Elements.WATER.state
        var milk = Elements.MILK.state
        var beans = Elements.BEANS.state
        var cups = Elements.CUPS.state
        var costs = Elements.COSTS.state
        
        println("The coffee machine has:")
        println("$water ml of water")
        println("$milk ml of milk")
        println("$beans g of coffee beans")
        println("$cups disposable cups")
        println("$$costs of money")
        println()
    }

    fun exitAction() {
        var work = Elements.WORK
        work.state = 0
    }
}

fun main() {
    val coffeemachine = CoffeeMachine()
    
    while (Elements.WORK.state == 1) {
        print("Write action (buy, fill, take, remaining, exit): ")
    
        when (readln()) {
             "fill" -> coffeemachine.fillAction()
             "buy" -> coffeemachine.buyAction()
             "take" -> coffeemachine.takeAction()
             "remaining" -> coffeemachine.remainingAction()
             "exit" -> coffeemachine.exitAction()
        }
    }
}
