// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCURRENCY_H
#define JAVAUTILCURRENCY_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilCurrency : NSObject <JavaIoSerializable>

 {
    NSString *currencyCode_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 ;
-(id)getCurrencyCode;
-(id)getSymbol;
-(id)getSymbolWithJavaUtilLocale:(id)arg0 ;
-(int)getDefaultFractionDigits;
-(void)dealloc;
+(id)getInstanceWithNSString:(id)arg0 ;
+(id)getInstanceWithJavaUtilLocale:(id)arg0 ;
+(id)getAvailableCurrencies;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif