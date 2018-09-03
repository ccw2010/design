/* 1. Design an online hotel booking system */


/* We have to design an online hotel booking system where a user 
   can search a hotel in a given city and book it.
*/

/* Main Classes :

    User
    Room
    Hotel
    Booking
    Adress

Enums: */

public enum RoomStatus {
    EMPTY
    NOT_EMPTY;
}

public enum RoomType{
    SINGLE,
    DOUBLE,
    TRIPLE;
}

public enum PaymentStatus {
    PAID,
    UNPAID;
}

class User{
	int userId;
	String name;
	Date dateOfBirth;
	String mobNo;
	String emailId;
	String sex;
}

// For the room in any hotel
class Room{
	int roomId;
	int hotelId;
	RoomType roomType;
	RoomStatus roomStatus;
}

class Hotel{
	int hotelId;
	String hotelName;
	Adress adress;
	List<Room> rooms; 
	float rating;
	Facilities facilities;
}

// a new booking is created for each booking done by any user
class Booking{
    int bookingId;
    int userId;
    int hotelId; 
    List<Rooms> bookedRooms; 
    int amount;
    PaymentStatus status_of_payment;
    Time bookingTime;
    Duration duration;
}

class Adress{
	string city;
	string pinCode;
	string streetNo;
	string landmark;
}

class Duration{
	Time from;
	Time to;
}

class Facilities{
	bool provides_lift;
	bool provides_power_backup;
	bool provides_hot_water;
	bool provides_breakfast_free;
}





