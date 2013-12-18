//
//  PKComponent.h
//  Stripe
//
//  Created by Phillip Cohen on 12/18/13.
//
//

#import <Foundation/Foundation.h>

// Represents a component of a credit card.
@interface PKComponent : NSObject

- (id)initWithString:(NSString *)string;
- (NSString *)string;
- (BOOL)isValid;
- (BOOL)isPartiallyValid;
- (NSString *)formattedString;
- (NSString *)formattedStringWithTrail;

@end
