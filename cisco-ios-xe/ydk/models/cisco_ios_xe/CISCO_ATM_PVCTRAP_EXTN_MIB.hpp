#ifndef _CISCO_ATM_PVCTRAP_EXTN_MIB_
#define _CISCO_ATM_PVCTRAP_EXTN_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_ATM_PVCTRAP_EXTN_MIB {

class CiscoAtmPvctrapExtnMib : public Entity
{
    public:
        CiscoAtmPvctrapExtnMib();
        ~CiscoAtmPvctrapExtnMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

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


class CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable : public Entity
{
    public:
        Catmcurstatchangepvcltable();
        ~Catmcurstatchangepvcltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Catmcurstatchangepvclentry; //type: CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry> > catmcurstatchangepvclentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable


class CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry : public Entity
{
    public:
        Catmcurstatchangepvclentry();
        ~Catmcurstatchangepvclentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        YLeaf atmvclvpi;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvci)
        YLeaf atmvclvci;
        YLeaf catmpvclstatustransition; //type: uint32
        YLeaf catmpvclstatuschangestart; //type: uint32
        YLeaf catmpvclstatuschangeend; //type: uint32
        YLeaf catmpvclsegccstatustransition; //type: uint32
        YLeaf catmpvclsegccstatuschangestart; //type: uint32
        YLeaf catmpvclsegccstatuschangeend; //type: uint32
        YLeaf catmpvclendccstatustransition; //type: uint32
        YLeaf catmpvclendccstatuschangestart; //type: uint32
        YLeaf catmpvclendccstatuschangeend; //type: uint32
        YLeaf catmpvclaisrdistatustransition; //type: uint32
        YLeaf catmpvclaisrdistatuschangestart; //type: uint32
        YLeaf catmpvclaisrdistatuschangeend; //type: uint32
        YLeaf catmpvclcurfailtime; //type: uint32
        YLeaf catmpvclprevrecovertime; //type: uint32
        YLeaf catmpvclfailurereason; //type: CatmoamfailuretypeEnum

}; // CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry


class CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable : public Entity
{
    public:
        Catmstatuschangepvclrangetable();
        ~Catmstatuschangepvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Catmstatuschangepvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry> > catmstatuschangepvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable


class CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry : public Entity
{
    public:
        Catmstatuschangepvclrangeentry();
        ~Catmstatuschangepvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        YLeaf atmvclvpi;
        YLeaf catmstatuschangepvclrangeindex; //type: int32
        YLeaf catmpvcllowerrangevalue; //type: int32
        YLeaf catmpvclhigherrangevalue; //type: int32
        YLeaf catmpvclrangestatuschangestart; //type: uint32
        YLeaf catmpvclrangestatuschangeend; //type: uint32

}; // CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable : public Entity
{
    public:
        Catmsegccstatuschpvclrangetable();
        ~Catmsegccstatuschpvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Catmsegccstatuschpvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry> > catmsegccstatuschpvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable


class CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry : public Entity
{
    public:
        Catmsegccstatuschpvclrangeentry();
        ~Catmsegccstatuschpvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        YLeaf catmstatuschangepvclrangeindex;
        YLeaf catmpvclsegcclowerrangevalue; //type: int32
        YLeaf catmpvclsegcchigherrangevalue; //type: int32
        YLeaf catmpvclsegccrangestatuschstart; //type: uint32
        YLeaf catmpvclsegccrangestatuschend; //type: uint32

}; // CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable : public Entity
{
    public:
        Catmendccstatuschpvclrangetable();
        ~Catmendccstatuschpvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Catmendccstatuschpvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry> > catmendccstatuschpvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable


class CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry : public Entity
{
    public:
        Catmendccstatuschpvclrangeentry();
        ~Catmendccstatuschpvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        YLeaf catmstatuschangepvclrangeindex;
        YLeaf catmpvclendcclowerrangevalue; //type: int32
        YLeaf catmpvclendcchigherrangevalue; //type: int32
        YLeaf catmpvclendccrangestatuschstart; //type: uint32
        YLeaf catmpvclendccrangestatuschend; //type: uint32

}; // CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable : public Entity
{
    public:
        Catmaisrdistatuschpvclrangetable();
        ~Catmaisrdistatuschpvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Catmaisrdistatuschpvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry> > catmaisrdistatuschpvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable


class CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry : public Entity
{
    public:
        Catmaisrdistatuschpvclrangeentry();
        ~Catmaisrdistatuschpvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        YLeaf catmstatuschangepvclrangeindex;
        YLeaf catmpvclaisrdilowerrangevalue; //type: int32
        YLeaf catmpvclaisrdihigherrangevalue; //type: int32
        YLeaf catmpvclaisrdirangestatuschstart; //type: uint32
        YLeaf catmpvclaisrdirangestatuschend; //type: uint32

}; // CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable : public Entity
{
    public:
        Catmdownpvclrangetable();
        ~Catmdownpvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Catmdownpvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry> > catmdownpvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable


class CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry : public Entity
{
    public:
        Catmdownpvclrangeentry();
        ~Catmdownpvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        YLeaf catmstatuschangepvclrangeindex;
        YLeaf catmdownpvcllowerrangevalue; //type: int32
        YLeaf catmdownpvclhigherrangevalue; //type: int32
        YLeaf catmdownpvclrangestart; //type: uint32
        YLeaf catmdownpvclrangeend; //type: uint32
        YLeaf catmprevuppvclrangestart; //type: uint32
        YLeaf catmprevuppvclrangeend; //type: uint32
        YLeaf catmpvclrangefailurereason; //type: CatmoamfailuretypeEnum

}; // CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable : public Entity
{
    public:
        Catmcurstatusuppvcltable();
        ~Catmcurstatusuppvcltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Catmcurstatusuppvclentry; //type: CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry> > catmcurstatusuppvclentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable


class CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry : public Entity
{
    public:
        Catmcurstatusuppvclentry();
        ~Catmcurstatusuppvclentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        YLeaf atmvclvpi;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvci)
        YLeaf atmvclvci;
        YLeaf catmpvclstatusuptransition; //type: uint32
        YLeaf catmpvclstatusupstart; //type: uint32
        YLeaf catmpvclstatusupend; //type: uint32
        YLeaf catmpvclsegccstatusuptransition; //type: uint32
        YLeaf catmpvclsegccstatusupstart; //type: uint32
        YLeaf catmpvclsegccstatusupend; //type: uint32
        YLeaf catmpvclendccstatusuptransition; //type: uint32
        YLeaf catmpvclendccstatusupstart; //type: uint32
        YLeaf catmpvclendccstatusupend; //type: uint32
        YLeaf catmpvclaisrdistatusuptransition; //type: uint32
        YLeaf catmpvclaisrdistatusupstart; //type: uint32
        YLeaf catmpvclaisrdistatusupend; //type: uint32
        YLeaf catmpvclcurrecovertime; //type: uint32
        YLeaf catmpvclprevfailtime; //type: uint32
        YLeaf catmpvclrecoveryreason; //type: CatmoamrecoverytypeEnum

}; // CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry


class CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable : public Entity
{
    public:
        Catmstatusuppvclrangetable();
        ~Catmstatusuppvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Catmstatusuppvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry> > catmstatusuppvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable


class CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry : public Entity
{
    public:
        Catmstatusuppvclrangeentry();
        ~Catmstatusuppvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        YLeaf catmstatuschangepvclrangeindex;
        YLeaf catmpvcluplowerrangevalue; //type: int32
        YLeaf catmpvcluphigherrangevalue; //type: int32
        YLeaf catmpvclrangestatusupstart; //type: uint32
        YLeaf catmpvclrangestatusupend; //type: uint32

}; // CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable : public Entity
{
    public:
        Catmsegccstatusuppvclrangetable();
        ~Catmsegccstatusuppvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Catmsegccstatusuppvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry> > catmsegccstatusuppvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable


class CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry : public Entity
{
    public:
        Catmsegccstatusuppvclrangeentry();
        ~Catmsegccstatusuppvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        YLeaf catmstatuschangepvclrangeindex;
        YLeaf catmpvclsegccuplowerrangevalue; //type: int32
        YLeaf catmpvclsegccuphigherrangevalue; //type: int32
        YLeaf catmpvclsegccrangestatusupstart; //type: uint32
        YLeaf catmpvclsegccrangestatusupend; //type: uint32

}; // CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable : public Entity
{
    public:
        Catmendccstatusuppvclrangetable();
        ~Catmendccstatusuppvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Catmendccstatusuppvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry> > catmendccstatusuppvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable


class CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry : public Entity
{
    public:
        Catmendccstatusuppvclrangeentry();
        ~Catmendccstatusuppvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        YLeaf catmstatuschangepvclrangeindex;
        YLeaf catmpvclendccuplowerrangevalue; //type: int32
        YLeaf catmpvclendccuphigherrangevalue; //type: int32
        YLeaf catmpvclendccrangestatusupstart; //type: uint32
        YLeaf catmpvclendccrangestatusupend; //type: uint32

}; // CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable : public Entity
{
    public:
        Catmaisrdistatusuppvclrangetable();
        ~Catmaisrdistatusuppvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Catmaisrdistatusuppvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry> > catmaisrdistatusuppvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable


class CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry : public Entity
{
    public:
        Catmaisrdistatusuppvclrangeentry();
        ~Catmaisrdistatusuppvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        YLeaf catmstatuschangepvclrangeindex;
        YLeaf catmpvclaisrdiuplowerrangevalue; //type: int32
        YLeaf catmpvclaisrdiuphigherrangevalue; //type: int32
        YLeaf catmpvclaisrdirangestatusupstart; //type: uint32
        YLeaf catmpvclaisrdirangestatusupend; //type: uint32

}; // CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry


class CiscoAtmPvctrapExtnMib::Catmuppvclrangetable : public Entity
{
    public:
        Catmuppvclrangetable();
        ~Catmuppvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Catmuppvclrangeentry; //type: CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry

        std::vector<std::shared_ptr<CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry> > catmuppvclrangeentry;
        
}; // CiscoAtmPvctrapExtnMib::Catmuppvclrangetable


class CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry : public Entity
{
    public:
        Catmuppvclrangeentry();
        ~Catmuppvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        YLeaf atmvclvpi;
        //type: int32 (refers to CISCO_ATM_PVCTRAP_EXTN_MIB::CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::catmstatuschangepvclrangeindex)
        YLeaf catmstatuschangepvclrangeindex;
        YLeaf catmuppvcllowerrangevalue; //type: int32
        YLeaf catmuppvclhigherrangevalue; //type: int32
        YLeaf catmuppvclrangestart; //type: uint32
        YLeaf catmuppvclrangeend; //type: uint32
        YLeaf catmprevdownpvclrangestart; //type: uint32
        YLeaf catmprevdownpvclrangeend; //type: uint32
        YLeaf catmpvclrangerecoveryreason; //type: CatmoamrecoverytypeEnum

}; // CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry

class CatmoamrecoverytypeEnum : public Enum
{
    public:
        static const Enum::YLeaf catmLoopbackOAMRecover;
        static const Enum::YLeaf catmSegmentCCOAMRecover;
        static const Enum::YLeaf catmEndCCOAMRecover;
        static const Enum::YLeaf catmAISRDIOAMRecover;

};

class CatmoamfailuretypeEnum : public Enum
{
    public:
        static const Enum::YLeaf catmLoopbackOAMFailure;
        static const Enum::YLeaf catmSegmentCCOAMFailure;
        static const Enum::YLeaf catmEndCCOAMFailure;
        static const Enum::YLeaf catmAISRDIOAMFailure;

};


}
}

#endif /* _CISCO_ATM_PVCTRAP_EXTN_MIB_ */

