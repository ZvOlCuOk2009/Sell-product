//
//  TSImages+CoreDataProperties.h
//  Sell product
//
//  Created by Mac on 26.05.16.
//  Copyright © 2016 Tsvigun Alexandr. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "TSImages.h"

NS_ASSUME_NONNULL_BEGIN

@class TSProduct;
@interface TSImages (CoreDataProperties)

@property (nullable, nonatomic, retain) NSData *image;
@property (nullable, nonatomic, retain) TSProduct *owner;

@end

NS_ASSUME_NONNULL_END
