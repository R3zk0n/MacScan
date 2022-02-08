// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILWEAKHASHMAP_ENTRY_H
#define JAVAUTILWEAKHASHMAP_ENTRY_H


#import <Foundation/Foundation.h>

#import "JavaLangRefWeakReference.h"
#import "JavaUtilWeakHashMap_Entry.h"
#import "AutoreleaseLiteSupport-Protocol.h"
#import "JavaUtilMap_Entry-Protocol.h"

@interface JavaUtilWeakHashMap_Entry : JavaLangRefWeakReference <AutoreleaseLiteSupport, JavaUtilMap_Entry>

 {
    int hash__;
    BOOL isNull_;
    id *value_;
    JavaUtilWeakHashMap_Entry *next_;
    uint8_t _autoreleaseLiteLastPoolId;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)autorelease;
-(id)initWithId:(id)arg0 withId:(id)arg1 withJavaLangRefReferenceQueue:(id)arg2 ;
-(id)getKey;
-(id)getValue;
-(id)setValueWithId:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif