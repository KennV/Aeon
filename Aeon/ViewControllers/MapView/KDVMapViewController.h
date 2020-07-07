//
//  DetailViewController.h
//  Aeon
//
//  Created by Kenn Villegas on 7/6/20.
//  Copyright © 2020 Kenn Villegas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Aeon+CoreDataModel.h"

@interface KDVMapViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

