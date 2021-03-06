//
//  SetUserOutsideRadiusReminderViewController.h
//  ForgetMeNot-Location-Based-Reminders
//
//  Created by Lukas Carvajal on 7/29/15.
//  Copyright (c) 2015 Lukas Carvajal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "Reminder.h"

@interface SetUserOutsideRadiusReminderViewController : UIViewController <CLLocationManagerDelegate, UITextFieldDelegate>

@property (strong, nonatomic) CLLocation *location;
@property (strong, nonatomic) CLLocationManager *locationManager;
@property (strong, nonatomic) Reminder *currentReminder;
@property (strong, nonatomic) NSString *pinUUID;
@property (nonatomic) CLLocationCoordinate2D center;
@property (nonatomic) CLLocationDistance radius;
@property double destinationLongitude;
@property double destinationLatitude;

@end
