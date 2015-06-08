//
//  ViewController.m
//  KSToastViewDemo
//
//  Created by c0ming on 6/8/15.
//  Copyright (c) 2015 c0ming. All rights reserved.
//

#import "ViewController.h"

#import "KSToastView.h"

@interface ViewController ()

@end

@implementation ViewController

static NSString *const reuseIdentifier = @"Cell";

- (IBAction)showAction:(UIBarButtonItem *)sender {
	[KSToastView ks_showToast:@"Across the Great Wall we can reach every corner in the world."];
}

- (void)viewDidLoad {
	[super viewDidLoad];

	[self.collectionView registerClass:[UICollectionViewCell class] forCellWithReuseIdentifier:reuseIdentifier];
}

- (void)didReceiveMemoryWarning {
	[super didReceiveMemoryWarning];
}

#pragma mark <UICollectionViewDataSource>

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
	return 100;
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath {
	UICollectionViewCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:reuseIdentifier forIndexPath:indexPath];
	cell.backgroundColor = [UIColor groupTableViewBackgroundColor];
	return cell;
}

- (void)collectionView:(UICollectionView *)collectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath {
	UICollectionViewCell *cell = [collectionView cellForItemAtIndexPath:indexPath];

	[KSToastView ks_showToast:cell duration:2.0f];
}

@end
