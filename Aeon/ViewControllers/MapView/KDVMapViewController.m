//
//  DetailViewController.m
//  Aeon
//
//  Created by Kenn Villegas on 7/6/20.
//  Copyright © 2020 Kenn Villegas. All rights reserved.
//

#import "KDVMapViewController.h"

@interface KDVMapViewController ()

@end

@implementation KDVMapViewController

- (void)configureView {
  // Update the user interface for the detail item.
  if (self.currentPerson) {
      self.currentPersonLabel.text = self.currentPerson.timestamp.description;
  }
}


- (void)viewDidLoad {
  [super viewDidLoad];
  // Do any additional setup after loading the view.
  [self configureView];
}


#pragma mark - Managing the detail item

- (void)setCurrentPerson:(Event *)newDetailItem {
  if (_currentPerson != newDetailItem) {
      _currentPerson = newDetailItem;
      
      // Update the view.
      [self configureView];
  }
}


@end
