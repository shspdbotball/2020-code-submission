#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    create_connect();
    enable_servos();
    set_servo_position(0,95);
    msleep(500);
    disable_servos();
    create_drive_direct(-200,-200);
    msleep(2875);
    create_drive_direct(65,-66);
    msleep(630);
    enable_servos();
    set_servo_position(0,1760);
    msleep(650);
    create_drive_direct(200,200);
    msleep(1100);
    create_drive_direct(-150,150);
    msleep(510);
    set_servo_position(0,190);
    create_drive_direct(-200,-200);
    msleep(300);
    set_servo_position(0, 1765);
    msleep(400);
    create_drive_direct(200,200);
    msleep(900);
    set_create_total_angle(0);
    while (get_create_total_angle() < 95)
    {
        create_drive_direct(-150,150);
    }
    create_stop();
    create_drive_direct(-200,-200);
    set_servo_position(0,200);
    msleep(1600);
	create_drive_direct(150,-150);
    msleep(1275);
    create_drive_direct(-200,-200);
    msleep(600);
    set_servo_position(0, 1765);
    msleep(400);
    create_drive_direct(200,200);
    msleep(400);
    create_drive_direct(200,200);
    set_servo_position(0,250);
    msleep(700);
    create_drive_direct(-150,150);
    msleep(375);
    create_drive_direct(-200,-200);
    msleep(1150);
    set_servo_position(0,1765);
    msleep(400);
    create_drive_direct(400,400);
    msleep(1000);
    create_drive_direct(-150,150);
    set_servo_position(0,250);
    msleep(920);
    create_drive_direct(500,500);
    msleep(1100);
    create_drive_direct(150,-150);
    msleep(1350);
    create_drive_direct(250,250);
    msleep(1235);
    set_create_total_angle(0);
    while (get_create_total_angle() < 100)
    {
        create_drive_direct(-150,148);
    }
    create_stop();
    create_drive_direct(-200,-200);
    msleep(2600);
    create_drive_direct(400,400);
    set_servo_position(0,1970);
    msleep(1500);
    create_drive_direct(200,-200);
    msleep(240);
    create_drive_direct(-500,-500);
    msleep(2000);
    create_drive_direct(-100,100);
    msleep(240);
    create_drive_direct(-200,-200);
    msleep(1250);
    create_drive_direct(-75,-75);
    set_servo_position(0,1700);
    msleep(1000);
    return 0;                                                                                                                                                                                                                                        
}  
      