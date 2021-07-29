<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "inventory_manager";
$ID=$_GET['ID'];
$new_units=$_GET['new_units'];
// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}
$sql = "SELECT Units_Available FROM component_database where Component_ID = $ID";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
  // output data of each row
  while($row = $result->fetch_assoc()) {
  $unit=$row["Units_Available"];
}}
$uni=$unit+$new_units;

$sql = "UPDATE component_database SET Units_Available=$uni where Component_ID=$ID";

if ($conn->query($sql) === TRUE) {
  echo "Record updated successfully";
} else {
  echo "Error updating record: " . $conn->error;
}

$conn->close();
?>
