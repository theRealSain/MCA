<?php
class Fruit 
{
    private $name;
    private $color;

    public function setDetails($name, $color) 
    {
        $this->name = $name;
        $this->color = $color;
    }

    public function getDetails()
    {
        return array("name" => $this->name, "color" => $this->color);
    }

    public function displayDetails() 
    {
        echo "<h3>Fruit Details:</h3>";
        echo "Name: " . $this->name . "<br>";
        echo "Color: " . $this->color . "<br>";
    }
}
?>