# Arduino Flipper
The full source code of my high school senior year project - controlling a broken flipper with an arduino.


## General Information

<table align="center">
<tr>
	<td align="left">Flipper Manufactorer: </td>
	<td align="left">Playmatic</td>
</tr>
<tr>
	<td align="left">Flipper Model:</td>
	<td align="left"><A target="blank_" href="http://www.ipdb.org/machine.cgi?id=2250">Space Gambler</a></td>
</tr>
<tr>
	<td align="left">Board</td>
	<td align="left">Arduino Mega 2560</td>
</tr>
<tr>
	<td align="left">Libraries used</td>
	<td align="left"><A href="https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library/blob/master/LiquidCrystal_I2C.h">LiquidCrystal_I2C.h</a>
</td>
</tr>
</table>

## Images

<table align="center">
<tr>
	<td>
		<img src="https://github.com/TomasKostadinov/arduino-flipper/blob/master/flipper_front.jpg">
	</td>
	<td>
		<img src="https://github.com/TomasKostadinov/arduino-flipper/blob/master/flipper_bottom.jpg">
	</td>
</tr>
<tr>
	<th>Front</td>
	<th>Back</td>
</tr>
</table>

## Arduino Ports
#### Outputs

<table align="center">
<tr>
	<th align="left">Arduino Port</td>
	<th align="left">Relay</td>
	<th align="left">Description</td>
</tr>
<tr>
	<td>Port#51</td>
	<td>1</td>
	<td>Bumper, Stingshots</td>
</tr>
<tr>
	<td>Port#48</td>
	<td>2</td>
	<td>DropTargets, BallReturn (release ball)</td>
</tr>
<tr>
	<td>Port#3</td>
	<td>3</td>
	<td>Lamp 32</td>
</tr>
<tr>
	<td>Port#4</td>
	<td>4</td>
	<td>Lamp 30</td>
</tr>
<tr>
	<td>Port#5</td>
	<td>4</td>
	<td>Lamp 28</td>
</tr>
<tr>
	<td>Port#6</td>
	<td>5</td>
	<td>Lamp 26</td>
</tr>
<tr>
	<td>Port#7</td>
	<td>6</td>
	<td>Lamp 24</td>
</tr>
<tr>
	<td>Port#8</td>
	<td>8</td>
	<td>Lamp 22</td>
</tr>
<tr>
	<td>Port#9</td>
	<td>9</td>
	<td>Lamp 20</td>
</tr>
<tr>
	<td>Port#10</td>
	<td>10</td>
	<td>Lamp 18</td>
</tr>
<tr>
	<td>Port#11</td>
	<td>11</td>
	<td>Lamp 17</td>
</tr>
<tr>
	<td>Port#22</td>
	<td>-</td>
	<td>LCD Display SCL</td>
</tr>
<tr>
	<td>Port#22</td>
	<td>-</td>
	<td>LCD Display SDA</td>
</tr>
</table>

#### Inputs
<table>
<tr>
	<th>Clamp</th>
	<th>Arduino Port</th>
	<th>Description</th>
</tr>
<tr>
	<td>1</td>
	<td>-</td>
	<td>Common -</td>
</tr>
<tr>
	<td>2</td>
	<td>Port#50</td>
	<td>Switch#46 | Detects ball at initial position</td>
</tr>
<tr>
	<td>3</td>
	<td>Port#51</td>
	<td>Switch 32 | Bumper Sensor</td>
</tr><!--
<tr>
	<td>4</td>
	<td>Port#52</td>
	<td>Switch ? </td>
</tr>-->
<tr>
	<td>5</td>
	<td>Port#52</td>
	<td>Switch 36</td>
</tr>
<tr>
	<td>6</td>
	<td>Port#52</td>
	<td>Switch 21</td>
</tr>
<tr>
	<td>7</td>
	<td>Port#52</td>
	<td>Switch 37</td>
</tr>
</table>


