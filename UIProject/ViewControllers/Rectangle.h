//
//  Rectangle.h
//  UIProject
//
//  Created by Vij, Jagroop on 11/13/19.
//  Copyright © 2019 Vij, Jagroop. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Rectangle : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *sideA;
@property (weak, nonatomic) IBOutlet UITextField *sideB;
@property (strong, nonatomic) IBOutlet UILabel *sideC;
@property (strong, nonatomic) IBOutlet UILabel *sideD;

@end
