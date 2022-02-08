// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_UNMODIFIABLEMAPENTRY_H
#define JAVAUTILCOLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_UNMODIFIABLEMAPENTRY_H


#import <Foundation/Foundation.h>

#import "JavaUtilMap_Entry-Protocol.h"
#import "JavaUtilMap_Entry-Protocol.h"

@interface JavaUtilCollections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableMapEntry : NSObject <JavaUtilMap_Entry>

 {
    id<JavaUtilMap_Entry> *mapEntry_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilMap_Entry:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)getKey;
-(id)getValue;
-(id)setValueWithId:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif