// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILLOCALE_H
#define JAVAUTILLOCALE_H


#import <Foundation/Foundation.h>

#import "NSCopying-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilLocale : NSObject <NSCopying, JavaIoSerializable>

 {
    NSString *countryCode_;
    NSString *languageCode_;
    NSString *variantCode_;
    NSString *cachedToStringResult_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithBoolean:(BOOL)arg0 withNSString:(id)arg1 withNSString:(id)arg2 ;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 ;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(id)getCountry;
-(id)getDisplayCountry;
-(id)getDisplayCountryWithJavaUtilLocale:(id)arg0 ;
-(id)getDisplayLanguage;
-(id)getDisplayLanguageWithJavaUtilLocale:(id)arg0 ;
-(id)getDisplayName;
-(id)getDisplayNameWithJavaUtilLocale:(id)arg0 ;
-(id)getDisplayVariant;
-(id)getDisplayVariantWithJavaUtilLocale:(id)arg0 ;
-(id)getISO3Country;
-(id)getISO3Language;
-(id)getLanguage;
-(id)getVariant;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)getAvailableLocales;
+(id)getDefault;
+(id)getISOCountries;
+(id)getISOLanguages;
+(void)setDefaultWithJavaUtilLocale:(id)arg0 ;
+(id)toNewStringWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif