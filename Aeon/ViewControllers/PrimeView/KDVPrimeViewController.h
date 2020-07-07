//
//  MasterViewController.h
//  Aeon
//
//  Created by Kenn Villegas on 7/6/20.
//  Copyright © 2020 Kenn Villegas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "Aeon+CoreDataModel.h"

@class KDVMapViewController;

@interface KDVPrimeViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) KDVMapViewController *mapViewController;

@property (strong, nonatomic) NSFetchedResultsController<Event *> *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

