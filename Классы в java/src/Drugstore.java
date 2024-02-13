public class Drugstore
{

        private String name;
        private boolean license;
        private int profit;


        public void setName(String name)
        {
            this.name = name;
        }


        public void setLicense(boolean license)
        {
            this.license = license;
        }


        public void setProfit(int profit)
        {
            this.profit = profit;
        }


        public Drugstore()
        {}


        public String getName()
        {
            return name;
        }


        public boolean isLicense()
        {
            return license;
        }


        public int getProfit()
        {
            return profit;
        }


        public void Print()
        {
            System.out.println("Название: " + name);
            if(license)
            {
                System.out.println("Есть лицензия.");
            }else{
                System.out.println("Нет лецензии.");
            }


            System.out.println("Доход: " + profit);
        }

}


