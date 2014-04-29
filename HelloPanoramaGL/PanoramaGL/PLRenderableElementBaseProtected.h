/*
 * PanoramaGL library
 * Version 0.1
 * Copyright (c) 2010 Javier Baez <javbaezga@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "PLObjectProtected.h"
#import "PLRenderableElementBase.h"

@interface PLRenderableElementBase(Protected)

#pragma mark -
#pragma mark property methods

-(void)setIsValid:(BOOL)value;

#pragma mark -
#pragma mark action methods

-(void)translate;
-(void)rotate;
-(void)internalRotate:(PLRotation)rotationValue;

#pragma mark -
#pragma mark render methods

-(void)beginRender;
-(void)endRender;
-(void)internalRender;

#pragma mark -
#pragma mark alpha methods

-(void)beginAlpha;
-(void)endAlpha;

@end
