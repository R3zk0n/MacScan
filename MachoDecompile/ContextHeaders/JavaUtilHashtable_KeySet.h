// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILHASHTABLE_KEYSET_H
#define JAVAUTILHASHTABLE_KEYSET_H



#import "JavaUtilAbstractSet.h"
#import "JavaUtilHashtable.h"

@interface JavaUtilHashtable_KeySet : JavaUtilAbstractSet {
    JavaUtilHashtable *this$0_;
}




-(id)iterator;
-(int)size;
-(BOOL)containsWithId:(id)arg0 ;
-(BOOL)removeWithId:(id)arg0 ;
-(void)clear;
-(BOOL)removeAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)retainAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)containsAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)toArray;
-(id)toArrayWithNSObjectArray:(id)arg0 ;
-(id)initWithJavaUtilHashtable:(id)arg0 ;
-(void)__javaClone;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif