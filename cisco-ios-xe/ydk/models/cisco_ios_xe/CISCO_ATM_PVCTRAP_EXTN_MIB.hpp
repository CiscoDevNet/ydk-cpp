#ifndef _CISCO_ATM_PVCTRAP_EXTN_MIB_
#define _CISCO_ATM_PVCTRAP_EXTN_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ATM_PVCTRAP_EXTN_MIB {

class CISCOATMPVCTRAPEXTNMIB : public ydk::Entity
{
    public:
        CISCOATMPVCTRAPEXTNMIB();
        ~CISCOATMPVCTRAPEXTNMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Catmcurstatchangepvcltable; //type: CISCOATMPVCTRAPEXTNMIB::Catmcurstatchangepvcltable
        class Catmstatuschangepvclrangetable; //type: CISCOATMPVCTRAPEXTNMIB::Catmstatuschangepvclrangetable
        class Catmsegccstatuschpvclrangetable; //type: CISCOATMPVCTRAPEXTNMIB::Catmsegccstatuschpvclrangetable
        class Catmendccstatuschpvclrangetable; //type: CISCOATMPVCTRAPEXTNMIB::Catmendccstatuschpvclrangetable
        class Catmaisrdistatuschpvclrangetable; //type: CISCOATMPVCTRAPEXTNMIB::Catmaisrdistatuschpvclrangetable
        class Catmdownpvclrangetable; //type: CISCOATMPVCTRAPEXTNMIB::Catmdownpvclrangetable
        class Catmcurstatusuppvcltable; //type: CISCOATMPVCTRAPEXTNMIB::Catmcurstatusuppvcltable
        class Catmstatusuppvclrangetable; //type: CISCOATMPVCTRAPEXTNMIB::Catmstatusuppvclrangetable
        class Catmsegccstatusuppvclrangetable; //type: CISCOATMPVCTRAPEXTNMIB::Catmsegccstatusuppvclrangetable
        class Catmendccstatusuppvclrangetable; //type: CISCOATMPVCTRAPEXTNMIB::Catmendccstatusuppvclrangetable
        class Catmaisrdistatusuppvclrangetable; //type: CISCOATMPVCTRAPEXTNMIB::Catmaisrdistatusuppvclrangetable
        class Catmuppvclrangetable; //type: CISCOATMPVCTRAPEXTNMIB::Catmuppvclrangetable

        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmaisrdistatuschpvclrangetable> catmaisrdistatuschpvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmaisrdistatusuppvclrangetable> catmaisrdistatusuppvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmcurstatchangepvcltable> catmcurstatchangepvcltable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmcurstatusuppvcltable> catmcurstatusuppvcltable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmdownpvclrangetable> catmdownpvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmendccstatuschpvclrangetable> catmendccstatuschpvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmendccstatusuppvclrangetable> catmendccstatusuppvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmsegccstatuschpvclrangetable> catmsegccstatuschpvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmsegccstatusuppvclrangetable> catmsegccstatusuppvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmstatuschangepvclrangetable> catmstatuschangepvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmstatusuppvclrangetable> catmstatusuppvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmuppvclrangetable> catmuppvclrangetable;
        
}; // CISCOATMPVCTRAPEXTNMIB


class CISCOATMPVCTRAPEXTNMIB::Catmaisrdistatuschpvclrangetable : public ydk::Entity
{
    public:
        Catmaisrdistatuschpvclrangetable();
        ~Catmaisrdistatuschpvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Catmaisrdistatuschpvclrangeentry; //type: CISCOATMPVCTRAPEXTNMIB::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry> > catmaisrdistatuschpvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::Catmaisrdistatuschpvclrangetable


class CISCOATMPVCTRAPEXTNMIB::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry : public ydk::Entity
{
    public:
        Catmaisrdistatuschpvclrangeentry();
        ~Catmaisrdistatuschpvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclaisrdilowerrangevalue; //type: int32
        ydk::YLeaf catmpvclaisrdihigherrangevalue; //type: int32
        ydk::YLeaf catmpvclaisrdirangestatuschstart; //type: uint32
        ydk::YLeaf catmpvclaisrdirangestatuschend; //type: uint32

}; // CISCOATMPVCTRAPEXTNMIB::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry


class CISCOATMPVCTRAPEXTNMIB::Catmaisrdistatusuppvclrangetable : public ydk::Entity
{
    public:
        Catmaisrdistatusuppvclrangetable();
        ~Catmaisrdistatusuppvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Catmaisrdistatusuppvclrangeentry; //type: CISCOATMPVCTRAPEXTNMIB::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry> > catmaisrdistatusuppvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::Catmaisrdistatusuppvclrangetable


class CISCOATMPVCTRAPEXTNMIB::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry : public ydk::Entity
{
    public:
        Catmaisrdistatusuppvclrangeentry();
        ~Catmaisrdistatusuppvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclaisrdiuplowerrangevalue; //type: int32
        ydk::YLeaf catmpvclaisrdiuphigherrangevalue; //type: int32
        ydk::YLeaf catmpvclaisrdirangestatusupstart; //type: uint32
        ydk::YLeaf catmpvclaisrdirangestatusupend; //type: uint32

}; // CISCOATMPVCTRAPEXTNMIB::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry


class CISCOATMPVCTRAPEXTNMIB::Catmcurstatchangepvcltable : public ydk::Entity
{
    public:
        Catmcurstatchangepvcltable();
        ~Catmcurstatchangepvcltable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Catmcurstatchangepvclentry; //type: CISCOATMPVCTRAPEXTNMIB::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry> > catmcurstatchangepvclentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::Catmcurstatchangepvcltable


class CISCOATMPVCTRAPEXTNMIB::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry : public ydk::Entity
{
    public:
        Catmcurstatchangepvclentry();
        ~Catmcurstatchangepvclentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::Atmvcltable::Atmvclentry::atmvclvci)
        ydk::YLeaf atmvclvci;
        ydk::YLeaf catmpvclstatustransition; //type: uint32
        ydk::YLeaf catmpvclstatuschangestart; //type: uint32
        ydk::YLeaf catmpvclstatuschangeend; //type: uint32
        ydk::YLeaf catmpvclsegccstatustransition; //type: uint32
        ydk::YLeaf catmpvclsegccstatuschangestart; //type: uint32
        ydk::YLeaf catmpvclsegccstatuschangeend; //type: uint32
        ydk::YLeaf catmpvclendccstatustransition; //type: uint32
        ydk::YLeaf catmpvclendccstatuschangestart; //type: uint32
        ydk::YLeaf catmpvclendccstatuschangeend; //type: uint32
        ydk::YLeaf catmpvclaisrdistatustransition; //type: uint32
        ydk::YLeaf catmpvclaisrdistatuschangestart; //type: uint32
        ydk::YLeaf catmpvclaisrdistatuschangeend; //type: uint32
        ydk::YLeaf catmpvclcurfailtime; //type: uint32
        ydk::YLeaf catmpvclprevrecovertime; //type: uint32
        ydk::YLeaf catmpvclfailurereason; //type: CatmOAMFailureType

}; // CISCOATMPVCTRAPEXTNMIB::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry


class CISCOATMPVCTRAPEXTNMIB::Catmcurstatusuppvcltable : public ydk::Entity
{
    public:
        Catmcurstatusuppvcltable();
        ~Catmcurstatusuppvcltable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Catmcurstatusuppvclentry; //type: CISCOATMPVCTRAPEXTNMIB::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry> > catmcurstatusuppvclentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::Catmcurstatusuppvcltable


class CISCOATMPVCTRAPEXTNMIB::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry : public ydk::Entity
{
    public:
        Catmcurstatusuppvclentry();
        ~Catmcurstatusuppvclentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::Atmvcltable::Atmvclentry::atmvclvci)
        ydk::YLeaf atmvclvci;
        ydk::YLeaf catmpvclstatusuptransition; //type: uint32
        ydk::YLeaf catmpvclstatusupstart; //type: uint32
        ydk::YLeaf catmpvclstatusupend; //type: uint32
        ydk::YLeaf catmpvclsegccstatusuptransition; //type: uint32
        ydk::YLeaf catmpvclsegccstatusupstart; //type: uint32
        ydk::YLeaf catmpvclsegccstatusupend; //type: uint32
        ydk::YLeaf catmpvclendccstatusuptransition; //type: uint32
        ydk::YLeaf catmpvclendccstatusupstart; //type: uint32
        ydk::YLeaf catmpvclendccstatusupend; //type: uint32
        ydk::YLeaf catmpvclaisrdistatusuptransition; //type: uint32
        ydk::YLeaf catmpvclaisrdistatusupstart; //type: uint32
        ydk::YLeaf catmpvclaisrdistatusupend; //type: uint32
        ydk::YLeaf catmpvclcurrecovertime; //type: uint32
        ydk::YLeaf catmpvclprevfailtime; //type: uint32
        ydk::YLeaf catmpvclrecoveryreason; //type: CatmOAMRecoveryType

}; // CISCOATMPVCTRAPEXTNMIB::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry


class CISCOATMPVCTRAPEXTNMIB::Catmdownpvclrangetable : public ydk::Entity
{
    public:
        Catmdownpvclrangetable();
        ~Catmdownpvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Catmdownpvclrangeentry; //type: CISCOATMPVCTRAPEXTNMIB::Catmdownpvclrangetable::Catmdownpvclrangeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmdownpvclrangetable::Catmdownpvclrangeentry> > catmdownpvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::Catmdownpvclrangetable


class CISCOATMPVCTRAPEXTNMIB::Catmdownpvclrangetable::Catmdownpvclrangeentry : public ydk::Entity
{
    public:
        Catmdownpvclrangeentry();
        ~Catmdownpvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmdownpvcllowerrangevalue; //type: int32
        ydk::YLeaf catmdownpvclhigherrangevalue; //type: int32
        ydk::YLeaf catmdownpvclrangestart; //type: uint32
        ydk::YLeaf catmdownpvclrangeend; //type: uint32
        ydk::YLeaf catmprevuppvclrangestart; //type: uint32
        ydk::YLeaf catmprevuppvclrangeend; //type: uint32
        ydk::YLeaf catmpvclrangefailurereason; //type: CatmOAMFailureType

}; // CISCOATMPVCTRAPEXTNMIB::Catmdownpvclrangetable::Catmdownpvclrangeentry


class CISCOATMPVCTRAPEXTNMIB::Catmendccstatuschpvclrangetable : public ydk::Entity
{
    public:
        Catmendccstatuschpvclrangetable();
        ~Catmendccstatuschpvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Catmendccstatuschpvclrangeentry; //type: CISCOATMPVCTRAPEXTNMIB::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry> > catmendccstatuschpvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::Catmendccstatuschpvclrangetable


class CISCOATMPVCTRAPEXTNMIB::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry : public ydk::Entity
{
    public:
        Catmendccstatuschpvclrangeentry();
        ~Catmendccstatuschpvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclendcclowerrangevalue; //type: int32
        ydk::YLeaf catmpvclendcchigherrangevalue; //type: int32
        ydk::YLeaf catmpvclendccrangestatuschstart; //type: uint32
        ydk::YLeaf catmpvclendccrangestatuschend; //type: uint32

}; // CISCOATMPVCTRAPEXTNMIB::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry


class CISCOATMPVCTRAPEXTNMIB::Catmendccstatusuppvclrangetable : public ydk::Entity
{
    public:
        Catmendccstatusuppvclrangetable();
        ~Catmendccstatusuppvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Catmendccstatusuppvclrangeentry; //type: CISCOATMPVCTRAPEXTNMIB::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry> > catmendccstatusuppvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::Catmendccstatusuppvclrangetable


class CISCOATMPVCTRAPEXTNMIB::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry : public ydk::Entity
{
    public:
        Catmendccstatusuppvclrangeentry();
        ~Catmendccstatusuppvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclendccuplowerrangevalue; //type: int32
        ydk::YLeaf catmpvclendccuphigherrangevalue; //type: int32
        ydk::YLeaf catmpvclendccrangestatusupstart; //type: uint32
        ydk::YLeaf catmpvclendccrangestatusupend; //type: uint32

}; // CISCOATMPVCTRAPEXTNMIB::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry


class CISCOATMPVCTRAPEXTNMIB::Catmsegccstatuschpvclrangetable : public ydk::Entity
{
    public:
        Catmsegccstatuschpvclrangetable();
        ~Catmsegccstatuschpvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Catmsegccstatuschpvclrangeentry; //type: CISCOATMPVCTRAPEXTNMIB::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry> > catmsegccstatuschpvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::Catmsegccstatuschpvclrangetable


class CISCOATMPVCTRAPEXTNMIB::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry : public ydk::Entity
{
    public:
        Catmsegccstatuschpvclrangeentry();
        ~Catmsegccstatuschpvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclsegcclowerrangevalue; //type: int32
        ydk::YLeaf catmpvclsegcchigherrangevalue; //type: int32
        ydk::YLeaf catmpvclsegccrangestatuschstart; //type: uint32
        ydk::YLeaf catmpvclsegccrangestatuschend; //type: uint32

}; // CISCOATMPVCTRAPEXTNMIB::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry


class CISCOATMPVCTRAPEXTNMIB::Catmsegccstatusuppvclrangetable : public ydk::Entity
{
    public:
        Catmsegccstatusuppvclrangetable();
        ~Catmsegccstatusuppvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Catmsegccstatusuppvclrangeentry; //type: CISCOATMPVCTRAPEXTNMIB::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry> > catmsegccstatusuppvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::Catmsegccstatusuppvclrangetable


class CISCOATMPVCTRAPEXTNMIB::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry : public ydk::Entity
{
    public:
        Catmsegccstatusuppvclrangeentry();
        ~Catmsegccstatusuppvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclsegccuplowerrangevalue; //type: int32
        ydk::YLeaf catmpvclsegccuphigherrangevalue; //type: int32
        ydk::YLeaf catmpvclsegccrangestatusupstart; //type: uint32
        ydk::YLeaf catmpvclsegccrangestatusupend; //type: uint32

}; // CISCOATMPVCTRAPEXTNMIB::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry


class CISCOATMPVCTRAPEXTNMIB::Catmstatuschangepvclrangetable : public ydk::Entity
{
    public:
        Catmstatuschangepvclrangetable();
        ~Catmstatuschangepvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Catmstatuschangepvclrangeentry; //type: CISCOATMPVCTRAPEXTNMIB::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry> > catmstatuschangepvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::Catmstatuschangepvclrangetable


class CISCOATMPVCTRAPEXTNMIB::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry : public ydk::Entity
{
    public:
        Catmstatuschangepvclrangeentry();
        ~Catmstatuschangepvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        ydk::YLeaf catmstatuschangepvclrangeindex; //type: int32
        ydk::YLeaf catmpvcllowerrangevalue; //type: int32
        ydk::YLeaf catmpvclhigherrangevalue; //type: int32
        ydk::YLeaf catmpvclrangestatuschangestart; //type: uint32
        ydk::YLeaf catmpvclrangestatuschangeend; //type: uint32

}; // CISCOATMPVCTRAPEXTNMIB::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry


class CISCOATMPVCTRAPEXTNMIB::Catmstatusuppvclrangetable : public ydk::Entity
{
    public:
        Catmstatusuppvclrangetable();
        ~Catmstatusuppvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Catmstatusuppvclrangeentry; //type: CISCOATMPVCTRAPEXTNMIB::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry> > catmstatusuppvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::Catmstatusuppvclrangetable


class CISCOATMPVCTRAPEXTNMIB::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry : public ydk::Entity
{
    public:
        Catmstatusuppvclrangeentry();
        ~Catmstatusuppvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvcluplowerrangevalue; //type: int32
        ydk::YLeaf catmpvcluphigherrangevalue; //type: int32
        ydk::YLeaf catmpvclrangestatusupstart; //type: uint32
        ydk::YLeaf catmpvclrangestatusupend; //type: uint32

}; // CISCOATMPVCTRAPEXTNMIB::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry


class CISCOATMPVCTRAPEXTNMIB::Catmuppvclrangetable : public ydk::Entity
{
    public:
        Catmuppvclrangetable();
        ~Catmuppvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Catmuppvclrangeentry; //type: CISCOATMPVCTRAPEXTNMIB::Catmuppvclrangetable::Catmuppvclrangeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmuppvclrangetable::Catmuppvclrangeentry> > catmuppvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::Catmuppvclrangetable


class CISCOATMPVCTRAPEXTNMIB::Catmuppvclrangetable::Catmuppvclrangeentry : public ydk::Entity
{
    public:
        Catmuppvclrangeentry();
        ~Catmuppvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmuppvcllowerrangevalue; //type: int32
        ydk::YLeaf catmuppvclhigherrangevalue; //type: int32
        ydk::YLeaf catmuppvclrangestart; //type: uint32
        ydk::YLeaf catmuppvclrangeend; //type: uint32
        ydk::YLeaf catmprevdownpvclrangestart; //type: uint32
        ydk::YLeaf catmprevdownpvclrangeend; //type: uint32
        ydk::YLeaf catmpvclrangerecoveryreason; //type: CatmOAMRecoveryType

}; // CISCOATMPVCTRAPEXTNMIB::Catmuppvclrangetable::Catmuppvclrangeentry

class CatmOAMRecoveryType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf catmLoopbackOAMRecover;
        static const ydk::Enum::YLeaf catmSegmentCCOAMRecover;
        static const ydk::Enum::YLeaf catmEndCCOAMRecover;
        static const ydk::Enum::YLeaf catmAISRDIOAMRecover;

};

class CatmOAMFailureType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf catmLoopbackOAMFailure;
        static const ydk::Enum::YLeaf catmSegmentCCOAMFailure;
        static const ydk::Enum::YLeaf catmEndCCOAMFailure;
        static const ydk::Enum::YLeaf catmAISRDIOAMFailure;

};


}
}

#endif /* _CISCO_ATM_PVCTRAP_EXTN_MIB_ */

