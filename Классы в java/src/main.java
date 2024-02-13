public class main
{

        public static void main(String[] args)
        {
            Drugstore d1 = new Drugstore();
            Drugstore d2 = new Drugstore();

            d1.setName("Nordin");
            d1.setLicense(true);
            d1.setProfit(1000);
            String s = d1.getName();
            System.out.println("Информация об аптеке " + s);
            d1.Print();

            d2.setName("Kravira");
            d2.setLicense(false);
            d2.setProfit(2000);
            s = d2.getName();
            System.out.println("Информация об аптеке " + s);
            d2.Print();
        }

}
