//
//  ViewController.h
//  location
//
//  Created by Anton A on 05.09.16.
//  Copyright © 2016 Anton A. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface ViewController : UIViewController <CLLocationManagerDelegate>

@property (weak, nonatomic) IBOutlet UILabel *latitudeLabel;
@property (weak, nonatomic) IBOutlet UILabel *longitudeLabel;

- (IBAction)getCurrentLocation:(id)sender;
@end

