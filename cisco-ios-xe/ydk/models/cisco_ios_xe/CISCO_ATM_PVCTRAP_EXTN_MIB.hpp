#ifndef _CISCO_ATM_PVCTRAP_EXTN_MIB_
#define _CISCO_ATM_PVCTRAP_EXTN_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ATM_PVCTRAP_EXTN_MIB {

class CiscoAtmPvctrapExtnMib : public ydk::Entity
{
    public:
        CiscoAtmPvctrapExtnMib();
        ~CiscoAtmPvctrapExtnMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Catmcurstatchangepvcltable; //type: CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable
        class Catmstatuschangepvclrangetable; //type: CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable
        class Catmsegccstatuschpvclrangetable; //type: CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable
        class Catmendccstatuschpvclrangetable; //type: CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable
        class Catmaisrdistatuschpvclrangetable; //type: CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable
        class Catmdownpvclrangetable; //type: CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable
        class Catmcurstatusuppvcltable; //type: CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable
        class Catmstatusuppvclrangetable; //type: CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable
        class Catmsegccstatusuppvclrangetable; //type: CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable
        class Catmendccstatusuppvclrangetable; //type: CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable
        class Catmaisrdistatusuppvclrangetable; //type: CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable
        class Catmuppvclrangetable; //type: CiscoAtmPvctrapExtnMib::Catmuppvclrangetable

        std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable> catmaisrdistatuschpvclrangetable;
        std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable> catmaisrdistatusuppvclrangetable;
        std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable> catmcurstatchangepvcltable;
        std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable> catmcurstatusuppvcltable;
        std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable> catmdownpvclrangetable;
        std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable> catmendccstatuschpvclrangetable;
        std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable> catmendccstatusuppvclrangetable;
        std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable> catmsegccstatuschpvclrangetable;
        std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable> catmsegccstatusuppvclrangetable;
        std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable> catmstatuschangepvclrangetable;
        std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable> catmstatusuppvclrangetable;
        std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmuppvclrangetable> catmuppvclrangetable;
        
}; // CiscoAtmPvctrapExtnMib


class CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable : public ydk::Entity
{
    public:
        Catmcurstatchangepvcltable();
        ~Catmcurstatchangepvcltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Catmcurstatchangepvclentry; //type: CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry> > catmcurstatchangepvclentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable


class CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry : public ydk::Entity
{
    public:
        Catmcurstatchangepvclentry();
        ~Catmcurstatchangepvclentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvci)
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
        ydk::YLeaf catmpvclfailurereason; //type: Catmoamfailuretype

}; // CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry


class CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable : public ydk::Entity
{
    public:
        Catmstatuschangepvclrangetable();
        ~Catmstatuschangepvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Catmstatuschangepvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry> > catmstatuschangepvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable


class CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry : public ydk::Entity
{
    public:
        Catmstatuschangepvclrangeentry();
        ~Catmstatuschangepvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        ydk::YLeaf catmstatuschangepvclrangeindex; //type: int32
        ydk::YLeaf catmpvcllowerrangevalue; //type: int32
        ydk::YLeaf catmpvclhigherrangevalue; //type: int32
        ydk::YLeaf catmpvclrangestatuschangestart; //type: uint32
        ydk::YLeaf catmpvclrangestatuschangeend; //type: uint32

}; // CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable : public ydk::Entity
{
    public:
        Catmsegccstatuschpvclrangetable();
        ~Catmsegccstatuschpvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Catmsegccstatuschpvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry> > catmsegccstatuschpvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable


class CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry : public ydk::Entity
{
    public:
        Catmsegccstatuschpvclrangeentry();
        ~Catmsegccstatuschpvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclsegcclowerrangevalue; //type: int32
        ydk::YLeaf catmpvclsegcchigherrangevalue; //type: int32
        ydk::YLeaf catmpvclsegccrangestatuschstart; //type: uint32
        ydk::YLeaf catmpvclsegccrangestatuschend; //type: uint32

}; // CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable : public ydk::Entity
{
    public:
        Catmendccstatuschpvclrangetable();
        ~Catmendccstatuschpvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Catmendccstatuschpvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry> > catmendccstatuschpvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable


class CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry : public ydk::Entity
{
    public:
        Catmendccstatuschpvclrangeentry();
        ~Catmendccstatuschpvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclendcclowerrangevalue; //type: int32
        ydk::YLeaf catmpvclendcchigherrangevalue; //type: int32
        ydk::YLeaf catmpvclendccrangestatuschstart; //type: uint32
        ydk::YLeaf catmpvclendccrangestatuschend; //type: uint32

}; // CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable : public ydk::Entity
{
    public:
        Catmaisrdistatuschpvclrangetable();
        ~Catmaisrdistatuschpvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Catmaisrdistatuschpvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry> > catmaisrdistatuschpvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable


class CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry : public ydk::Entity
{
    public:
        Catmaisrdistatuschpvclrangeentry();
        ~Catmaisrdistatuschpvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclaisrdilowerrangevalue; //type: int32
        ydk::YLeaf catmpvclaisrdihigherrangevalue; //type: int32
        ydk::YLeaf catmpvclaisrdirangestatuschstart; //type: uint32
        ydk::YLeaf catmpvclaisrdirangestatuschend; //type: uint32

}; // CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable : public ydk::Entity
{
    public:
        Catmdownpvclrangetable();
        ~Catmdownpvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Catmdownpvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry> > catmdownpvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable


class CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry : public ydk::Entity
{
    public:
        Catmdownpvclrangeentry();
        ~Catmdownpvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmdownpvcllowerrangevalue; //type: int32
        ydk::YLeaf catmdownpvclhigherrangevalue; //type: int32
        ydk::YLeaf catmdownpvclrangestart; //type: uint32
        ydk::YLeaf catmdownpvclrangeend; //type: uint32
        ydk::YLeaf catmprevuppvclrangestart; //type: uint32
        ydk::YLeaf catmprevuppvclrangeend; //type: uint32
        ydk::YLeaf catmpvclrangefailurereason; //type: Catmoamfailuretype

}; // CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable : public ydk::Entity
{
    public:
        Catmcurstatusuppvcltable();
        ~Catmcurstatusuppvcltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Catmcurstatusuppvclentry; //type: CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry> > catmcurstatusuppvclentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable


class CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry : public ydk::Entity
{
    public:
        Catmcurstatusuppvclentry();
        ~Catmcurstatusuppvclentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvci)
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
        ydk::YLeaf catmpvclrecoveryreason; //type: Catmoamrecoverytype

}; // CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry


class CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable : public ydk::Entity
{
    public:
        Catmstatusuppvclrangetable();
        ~Catmstatusuppvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Catmstatusuppvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry> > catmstatusuppvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable


class CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry : public ydk::Entity
{
    public:
        Catmstatusuppvclrangeentry();
        ~Catmstatusuppvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvcluplowerrangevalue; //type: int32
        ydk::YLeaf catmpvcluphigherrangevalue; //type: int32
        ydk::YLeaf catmpvclrangestatusupstart; //type: uint32
        ydk::YLeaf catmpvclrangestatusupend; //type: uint32

}; // CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable : public ydk::Entity
{
    public:
        Catmsegccstatusuppvclrangetable();
        ~Catmsegccstatusuppvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Catmsegccstatusuppvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry> > catmsegccstatusuppvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable


class CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry : public ydk::Entity
{
    public:
        Catmsegccstatusuppvclrangeentry();
        ~Catmsegccstatusuppvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclsegccuplowerrangevalue; //type: int32
        ydk::YLeaf catmpvclsegccuphigherrangevalue; //type: int32
        ydk::YLeaf catmpvclsegccrangestatusupstart; //type: uint32
        ydk::YLeaf catmpvclsegccrangestatusupend; //type: uint32

}; // CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable : public ydk::Entity
{
    public:
        Catmendccstatusuppvclrangetable();
        ~Catmendccstatusuppvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Catmendccstatusuppvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry> > catmendccstatusuppvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable


class CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry : public ydk::Entity
{
    public:
        Catmendccstatusuppvclrangeentry();
        ~Catmendccstatusuppvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclendccuplowerrangevalue; //type: int32
        ydk::YLeaf catmpvclendccuphigherrangevalue; //type: int32
        ydk::YLeaf catmpvclendccrangestatusupstart; //type: uint32
        ydk::YLeaf catmpvclendccrangestatusupend; //type: uint32

}; // CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable : public ydk::Entity
{
    public:
        Catmaisrdistatusuppvclrangetable();
        ~Catmaisrdistatusuppvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Catmaisrdistatusuppvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry> > catmaisrdistatusuppvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable


class CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry : public ydk::Entity
{
    public:
        Catmaisrdistatusuppvclrangeentry();
        ~Catmaisrdistatusuppvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclaisrdiuplowerrangevalue; //type: int32
        ydk::YLeaf catmpvclaisrdiuphigherrangevalue; //type: int32
        ydk::YLeaf catmpvclaisrdirangestatusupstart; //type: uint32
        ydk::YLeaf catmpvclaisrdirangestatusupend; //type: uint32

}; // CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmuppvclrangetable : public ydk::Entity
{
    public:
        Catmuppvclrangetable();
        ~Catmuppvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Catmuppvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry> > catmuppvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmuppvclrangetable


class CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry : public ydk::Entity
{
    public:
        Catmuppvclrangeentry();
        ~Catmuppvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmuppvcllowerrangevalue; //type: int32
        ydk::YLeaf catmuppvclhigherrangevalue; //type: int32
        ydk::YLeaf catmuppvclrangestart; //type: uint32
        ydk::YLeaf catmuppvclrangeend; //type: uint32
        ydk::YLeaf catmprevdownpvclrangestart; //type: uint32
        ydk::YLeaf catmprevdownpvclrangeend; //type: uint32
        ydk::YLeaf catmpvclrangerecoveryreason; //type: Catmoamrecoverytype

}; // CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry

class Catmoamrecoverytype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf catmLoopbackOAMRecover;
        static const ydk::Enum::YLeaf catmSegmentCCOAMRecover;
        static const ydk::Enum::YLeaf catmEndCCOAMRecover;
        static const ydk::Enum::YLeaf catmAISRDIOAMRecover;

};

class Catmoamfailuretype : public ydk::Enum
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

