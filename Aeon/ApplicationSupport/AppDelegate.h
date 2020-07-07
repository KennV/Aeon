//
//  AppDelegate.h
//  Aeon
//
//  Created by Kenn Villegas on 7/6/20.
//  Copyright © 2020 Kenn Villegas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentCloudKitContainer *persistentContainer;

- (void)saveContext;


@end

