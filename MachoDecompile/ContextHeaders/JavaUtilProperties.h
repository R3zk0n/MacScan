// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILPROPERTIES_H
#define JAVAUTILPROPERTIES_H



#import "JavaUtilHashtable.h"
#import "JavaUtilProperties.h"

@interface JavaUtilProperties : JavaUtilHashtable {
    JavaUtilProperties *defaults_;
}




-(id)init;
-(id)initWithJavaUtilProperties:(id)arg0 ;
-(void)dumpStringWithJavaLangStringBuilder:(id)arg0 withNSString:(id)arg1 withBoolean:(BOOL)arg2 ;
-(id)getPropertyWithNSString:(id)arg0 ;
-(id)getPropertyWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)listWithJavaIoPrintStream:(id)arg0 ;
-(void)listWithJavaIoPrintWriter:(id)arg0 ;
-(void)listToAppendableWithJavaLangAppendable:(id)arg0 ;
-(void)load__WithJavaIoInputStream:(id)arg0 ;
-(void)load__WithJavaIoReader:(id)arg0 ;
-(id)propertyNames;
-(id)stringPropertyNames;
-(void)selectPropertiesWithJavaUtilHashtable:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)saveWithJavaIoOutputStream:(id)arg0 withNSString:(id)arg1 ;
-(id)setPropertyWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)storeWithJavaIoOutputStream:(id)arg0 withNSString:(id)arg1 ;
-(void)storeWithJavaIoWriter:(id)arg0 withNSString:(id)arg1 ;
-(void)loadFromXMLWithJavaIoInputStream:(id)arg0 ;
-(void)storeToXMLWithJavaIoOutputStream:(id)arg0 withNSString:(id)arg1 ;
-(void)storeToXMLWithJavaIoOutputStream:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 ;
-(id)substitutePredefinedEntriesWithNSString:(id)arg0 ;
-(void)dealloc;
+(id)__annotations_saveWithJavaIoOutputStream_withNSString_;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif