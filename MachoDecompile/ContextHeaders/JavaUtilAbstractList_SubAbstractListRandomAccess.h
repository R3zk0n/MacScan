// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILABSTRACTLIST_SUBABSTRACTLISTRANDOMACCESS_H
#define JAVAUTILABSTRACTLIST_SUBABSTRACTLISTRANDOMACCESS_H

@class SubAbstractList;

#import <Foundation/Foundation.h>

#import "JavaUtilRandomAccess-Protocol.h"

@interface JavaUtilAbstractList_SubAbstractListRandomAccess : SubAbstractList <JavaUtilRandomAccess>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilAbstractList:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif