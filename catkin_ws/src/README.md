								Scan microscan3

------------------------------ sick_safetyscanners ------------------------------

- Source: https://github.com/SICKAG/sick_safetyscanners
- Connect Microscan3 to PC via ethernet
- Check IP of Microscan3 (192.168.1.3)
- Change IP of PC fix 192.168.1.x
- Test connect: $ping 192.168.1.3
- Test for microscan3: $roslaunch sick_safetyscanners sick_safetyscanners.launch sensor_ip:=192.168.1.3 host_ip:=192.168.1.5 frame_id:=base_laser
- Open Rviz: $rosrun rviz rviz
- Change in Rviz: fix_frame to base_laser, add Laser_scan
- Enjoy!

							END - Scan microscan3

						Manual control with keyboard

------------------------------ kit_agv_teleop ------------------------------
	
- Test: $roslaunch kit_agv_teleop kit_agv_teleop_key.launch
- Enjoy!

					END - Manual control with keyboard

					Giao tiếp với driver motor (USB to RS485)

------------------------------ r2serial_driver ------------------------------ 

- Connect RS485
- Check serial port: $ls /dev/ttyUSB*
- Allows access: $sudo chmod 777 /dev/ttyUSBx
- Test: $roslaunch r2serial_driver r2serial_driver.launch port:=/dev/ttyUSBx
- Control: $roslaunch kit_agv_teleop kit_agv_teleop_key.launch
- Enjoy!

					 END - Giao tiếp với driver motor

						joint_state_publisher

------------------------- joint_state_publisher ------------------------------ 

- Source: https://github.com/ros/joint_state_publisher
- Using with URDF

					END - joint_state_publisher

							Create Map

------------------------------ Mapping ------------------------------

- Test Microscan3
- Connect to motor: $roslaunch r2serial_driver r2serial_driver.launch port:=/dev/ttyUSBx
- Run Mapping: $roslaunch kit_agv_slam kit_agv_slam.launch sensor_ip:=192.168.1.3 host_ip:=192.168.1.5 
- Manual control: $roslaunch kit_agv_teleop kit_agv_teleop_key.launch
- Enjoy!
- Save map: $rosrun map_server map_saver -f ~/TungNV/MyKitAGV/catkin_ws/src/kit_agv_navigation/maps/map_name
- Done!

							END - Create Map

							Gia lap du lieu Odometry

------------------------------ laser_scan_matcher ------------------------------

- Source csm: https://github.com/AndreaCensi/csm
- Good for estimates pose

------------------------------ rf2o_laser_odometry ------------------------------

- Source: https://github.com/MAPIRlab/rf2o_laser_odometry
- Open fr2o_laser_odometry.launch file and change: 
	laser_scan_topic: from /scan to /sick_safetyscanners/scan 
	base_frame_id: from /base_link to /base_footprint
- Enjoy!

						END - Gia lap du lieu Odometry

								Location

------------------------------ Location ------------------------------

- Test Microscan3
- Run: $roslaunch kit_agv_location kit_agv_location.launch sensor_ip:=192.168.1.3 host_ip:=192.168.1.5 map_file:=$HOME/TungNV/MyKitAGV/catkin_ws/src/kit_agv_location/maps/map_name.yaml
- Move origin of robot in the Rviz with 2D Pose Estimate
- Check pose: $rostopic echo /amcl_pose
- Enjoy!

							END - Location 

								Navigation

------------------------------ Navigation ------------------------------

- Test Microscan3
- Connect to motor: $roslaunch r2serial_driver r2serial_driver.launch port:=/dev/ttyUSBx
- Run: $roslaunch kit_agv_navigation kit_agv_navigation.launch sensor_ip:=192.168.1.3 host_ip:=192.168.1.5 map_file:=$HOME/TungNV/MyKitAGV/catkin_ws/src/kit_agv_navigation/maps/map_name.yaml
- Move origin of robot in the Rviz with 2D Pose Estimate
- Set Goal in the Rviz with 2D Nav Goal
- Enjoy!

							END - Navigation