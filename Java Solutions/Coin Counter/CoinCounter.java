package CoinCounter.src;

import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Collections;

public class CoinCounter {

    final BigDecimal FIFTY = BigDecimal.valueOf(50);
    final BigDecimal TWENTY = BigDecimal.valueOf(20);
    final BigDecimal TEN = BigDecimal.valueOf(10);
    final BigDecimal FIVE = BigDecimal.valueOf(5);
    final BigDecimal TWO = BigDecimal.valueOf(2);
    final BigDecimal ONE = BigDecimal.valueOf(1);

    final BigDecimal FIFTY_SMALL = BigDecimal.valueOf(0.50);
    final BigDecimal TWENTY_SMALL = BigDecimal.valueOf(0.20);
    final BigDecimal TEN_SMALL = BigDecimal.valueOf(0.10);
    final BigDecimal FIVE_SMALL = BigDecimal.valueOf(0.05);
    final BigDecimal TWO_SMALL = BigDecimal.valueOf(0.02);
    final BigDecimal ONE_SMALL = BigDecimal.valueOf(0.01);

    public ArrayList<CoinType> calculateChange(BigDecimal change){
        ArrayList<CoinType> changeToGive = new ArrayList<>();

        if (change.compareTo(FIFTY) >= 0){
            changeToGive.add(CoinType.FIFTY_NOTE);
            change = change.subtract(FIFTY);
        }
        if (change.compareTo(TWENTY) >= 0){
            changeToGive.add(CoinType.TWENTY_NOTE);
            change = change.subtract(TWENTY);
        }
        if (change.compareTo(TWENTY) >= 0){
            changeToGive.add(CoinType.TWENTY_NOTE);
            change = change.subtract(TWENTY);
        }
        if (change.compareTo(TEN) >= 0){
            changeToGive.add(CoinType.TEN_NOTE);
            change = change.subtract(TEN);
        }
        if (change.compareTo(FIVE) >= 0){
            changeToGive.add(CoinType.FIVE_NOTE);
            change = change.subtract(FIVE);
        }
        if (change.compareTo(TWO) >= 0){
            changeToGive.add(CoinType.TWO_LARGE);
            change = change.subtract(TWO);
        }
        if (change.compareTo(TWO) >= 0){
            changeToGive.add(CoinType.TWO_LARGE);
            change = change.subtract(TWO);
        }
        if (change.compareTo(ONE) >= 0){
            changeToGive.add(CoinType.ONE_LARGE);
            change = change.subtract(ONE);
        }
        if (change.compareTo(FIFTY_SMALL) >= 0){
            changeToGive.add(CoinType.FIFTY);
            change = change.subtract(FIFTY_SMALL);
        }
        if (change.compareTo(TWENTY_SMALL) >= 0){
            changeToGive.add(CoinType.TWENTY);
            change = change.subtract(TWENTY_SMALL);
        }
        if (change.compareTo(TWENTY_SMALL) >= 0){
            changeToGive.add(CoinType.TWENTY);
            change = change.subtract(TWENTY_SMALL);
        }
        if (change.compareTo(TEN_SMALL) >= 0){
            changeToGive.add(CoinType.TEN);
            change = change.subtract(TEN_SMALL);
        }
        if (change.compareTo(FIVE_SMALL) >= 0){
            changeToGive.add(CoinType.FIVE);
            change = change.subtract(FIVE_SMALL);
        }
        if (change.compareTo(TWO_SMALL) >= 0){
            changeToGive.add(CoinType.TWO);
            change = change.subtract(TWO_SMALL);
        }
        if (change.compareTo(TWO_SMALL) >= 0){
            changeToGive.add(CoinType.TWO);
            change = change.subtract(TWO_SMALL);
        }
        if (change.compareTo(ONE_SMALL) >= 0){
            changeToGive.add(CoinType.ONE);
            change = change.subtract(ONE_SMALL);
        }

        return changeToGive;
    }
}
