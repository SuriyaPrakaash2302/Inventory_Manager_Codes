<?php
$servername = "121.200.55.42:4063";
$username = "inventory";
$password = "inv@123";
$dbname = "inventory_manager";
$ID=1;
// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}
$sql = "SELECT Units_Produced FROM product_database where Product_ID = $ID";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
  // output data of each row
  while($row = $result->fetch_assoc()) {
  $unit=$row["Units_Produced"];
}}

$sql = "UPDATE product_database SET Units_Produced=$unit+1 where Product_ID=$ID";

if ($conn->query($sql) === TRUE) {
  echo "Record updated successfully";
} else {
  echo "Error updating record: " . $conn->error;
}

$conn->close();
?>
