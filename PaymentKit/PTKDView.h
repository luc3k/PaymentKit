//
//  PTKPaymentField.h
//  PTKPayment Example
//
//  Created by Alex MacCaw on 1/22/13.
//  Copyright (c) 2013 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PTKDCard.h"
#import "PTKCardNumber.h"
#import "PTKCardExpiry.h"
#import "PTKCardCVC.h"
#import "PTKAddressZip.h"
#import "PTKUSAddressZip.h"

@class PTKDView, PTKTextField;

__attribute__((deprecated("We've moved development of PaymentKit into github.com/stripe/stripe-ios. You should migrate to use that instead. For help, see https://github.com/stripe/paymentkit#migration .")))
@protocol PTKDViewDelegate <NSObject>

@optional
- (void)paymentView:(PTKDView *)paymentView withCard:(PTKDCard *)card isValid:(BOOL)valid;

@end

__attribute__((deprecated("We've moved development of PaymentKit into github.com/stripe/stripe-ios. You should migrate to use that instead. For help, see https://github.com/stripe/paymentkit#migration .")))
@interface PTKDView : UIView

- (BOOL)isValid;

@property (nonatomic, readonly) UIView *opaqueOverGradientView;
@property (nonatomic, readonly) PTKCardNumber *cardNumber;
@property (nonatomic, readonly) PTKCardExpiry *cardExpiry;
@property (nonatomic, readonly) PTKCardCVC *cardCVC;
@property (nonatomic, readonly) PTKAddressZip *addressZip;

@property IBOutlet UIView *innerView;
@property IBOutlet UIView *clipView;
@property IBOutlet PTKTextField *cardNumberField;
@property IBOutlet PTKTextField *cardExpiryField;
@property IBOutlet PTKTextField *cardCVCField;
@property IBOutlet UIImageView *placeholderView;
@property (nonatomic, weak) id <PTKDViewDelegate> delegate;
@property (readonly) PTKDCard *card;

@end
