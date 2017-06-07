#ifndef _CISCO_SESS_BORDER_CTRLR_STATS_MIB_
#define _CISCO_SESS_BORDER_CTRLR_STATS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_SESS_BORDER_CTRLR_STATS_MIB {

class CiscoSessBorderCtrlrStatsMib : public Entity
{
    public:
        CiscoSessBorderCtrlrStatsMib();
        ~CiscoSessBorderCtrlrStatsMib();

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

        class Csbradiusstatstable; //type: CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable
        class Csbrfbillrealmstatstable; //type: CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable
        class Csbsipmthdcurrentstatstable; //type: CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable
        class Csbsipmthdhistorystatstable; //type: CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable
        class Csbsipmthdrccurrentstatstable; //type: CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable
        class Csbsipmthdrchistorystatstable; //type: CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable

        std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable> csbradiusstatstable;
        std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable> csbrfbillrealmstatstable;
        std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable> csbsipmthdcurrentstatstable;
        std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable> csbsipmthdhistorystatstable;
        std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable> csbsipmthdrccurrentstatstable;
        std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable> csbsipmthdrchistorystatstable;
        
}; // CiscoSessBorderCtrlrStatsMib


class CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable : public Entity
{
    public:
        Csbradiusstatstable();
        ~Csbradiusstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csbradiusstatsentry; //type: CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry> > csbradiusstatsentry;
        
}; // CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable


class CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry : public Entity
{
    public:
        Csbradiusstatsentry();
        ~Csbradiusstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        YLeaf csbcallstatsserviceindex;
        YLeaf csbradiusstatsentindex; //type: uint32
        YLeaf csbradiusstatsclientname; //type: string
        YLeaf csbradiusstatsclienttype; //type: CiscosbcradiusclienttypeEnum
        YLeaf csbradiusstatssrvrname; //type: string
        YLeaf csbradiusstatsacsreqs; //type: uint64
        YLeaf csbradiusstatsacsrtrns; //type: uint64
        YLeaf csbradiusstatsacsaccpts; //type: uint64
        YLeaf csbradiusstatsacsrejects; //type: uint64
        YLeaf csbradiusstatsacschalls; //type: uint64
        YLeaf csbradiusstatsactreqs; //type: uint64
        YLeaf csbradiusstatsactretrans; //type: uint64
        YLeaf csbradiusstatsactrsps; //type: uint64
        YLeaf csbradiusstatsmalformedrsps; //type: uint64
        YLeaf csbradiusstatsbadauths; //type: uint64
        YLeaf csbradiusstatspending; //type: uint32
        YLeaf csbradiusstatstimeouts; //type: uint64
        YLeaf csbradiusstatsunknowntype; //type: uint64
        YLeaf csbradiusstatsdropped; //type: uint64

}; // CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry


class CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable : public Entity
{
    public:
        Csbrfbillrealmstatstable();
        ~Csbrfbillrealmstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csbrfbillrealmstatsentry; //type: CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry> > csbrfbillrealmstatsentry;
        
}; // CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable


class CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry : public Entity
{
    public:
        Csbrfbillrealmstatsentry();
        ~Csbrfbillrealmstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        YLeaf csbcallstatsserviceindex;
        YLeaf csbrfbillrealmstatsindex; //type: uint32
        YLeaf csbrfbillrealmstatsrealmname; //type: string
        YLeaf csbrfbillrealmstatstotalstartacrs; //type: uint32
        YLeaf csbrfbillrealmstatstotalinterimacrs; //type: uint32
        YLeaf csbrfbillrealmstatstotalstopacrs; //type: uint32
        YLeaf csbrfbillrealmstatstotaleventacrs; //type: uint32
        YLeaf csbrfbillrealmstatssuccstartacrs; //type: uint32
        YLeaf csbrfbillrealmstatssuccinterimacrs; //type: uint32
        YLeaf csbrfbillrealmstatssuccstopacrs; //type: uint32
        YLeaf csbrfbillrealmstatssucceventacrs; //type: uint32
        YLeaf csbrfbillrealmstatsfailstartacrs; //type: uint32
        YLeaf csbrfbillrealmstatsfailinterimacrs; //type: uint32
        YLeaf csbrfbillrealmstatsfailstopacrs; //type: uint32
        YLeaf csbrfbillrealmstatsfaileventacrs; //type: uint32

}; // CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry


class CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable : public Entity
{
    public:
        Csbsipmthdcurrentstatstable();
        ~Csbsipmthdcurrentstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csbsipmthdcurrentstatsentry; //type: CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry> > csbsipmthdcurrentstatsentry;
        
}; // CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable


class CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry : public Entity
{
    public:
        Csbsipmthdcurrentstatsentry();
        ~Csbsipmthdcurrentstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        YLeaf csbcallstatsserviceindex;
        YLeaf csbsipmthdcurrentstatsadjname; //type: string
        YLeaf csbsipmthdcurrentstatsmethod; //type: CiscosbcsipmethodEnum
        YLeaf csbsipmthdcurrentstatsinterval; //type: CiscosbcperiodicstatsintervalEnum
        YLeaf csbsipmthdcurrentstatsmethodname; //type: string
        YLeaf csbsipmthdcurrentstatsreqin; //type: uint32
        YLeaf csbsipmthdcurrentstatsreqout; //type: uint32
        YLeaf csbsipmthdcurrentstatsresp1xxin; //type: uint32
        YLeaf csbsipmthdcurrentstatsresp1xxout; //type: uint32
        YLeaf csbsipmthdcurrentstatsresp2xxin; //type: uint32
        YLeaf csbsipmthdcurrentstatsresp2xxout; //type: uint32
        YLeaf csbsipmthdcurrentstatsresp3xxin; //type: uint32
        YLeaf csbsipmthdcurrentstatsresp3xxout; //type: uint32
        YLeaf csbsipmthdcurrentstatsresp4xxin; //type: uint32
        YLeaf csbsipmthdcurrentstatsresp4xxout; //type: uint32
        YLeaf csbsipmthdcurrentstatsresp5xxin; //type: uint32
        YLeaf csbsipmthdcurrentstatsresp5xxout; //type: uint32
        YLeaf csbsipmthdcurrentstatsresp6xxin; //type: uint32
        YLeaf csbsipmthdcurrentstatsresp6xxout; //type: uint32

}; // CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry


class CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable : public Entity
{
    public:
        Csbsipmthdhistorystatstable();
        ~Csbsipmthdhistorystatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csbsipmthdhistorystatsentry; //type: CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry> > csbsipmthdhistorystatsentry;
        
}; // CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable


class CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry : public Entity
{
    public:
        Csbsipmthdhistorystatsentry();
        ~Csbsipmthdhistorystatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        YLeaf csbcallstatsserviceindex;
        YLeaf csbsipmthdhistorystatsadjname; //type: string
        YLeaf csbsipmthdhistorystatsmethod; //type: CiscosbcsipmethodEnum
        YLeaf csbsipmthdhistorystatsinterval; //type: CiscosbcperiodicstatsintervalEnum
        YLeaf csbsipmthdhistorystatsmethodname; //type: string
        YLeaf csbsipmthdhistorystatsreqin; //type: uint32
        YLeaf csbsipmthdhistorystatsreqout; //type: uint32
        YLeaf csbsipmthdhistorystatsresp1xxin; //type: uint32
        YLeaf csbsipmthdhistorystatsresp1xxout; //type: uint32
        YLeaf csbsipmthdhistorystatsresp2xxin; //type: uint32
        YLeaf csbsipmthdhistorystatsresp2xxout; //type: uint32
        YLeaf csbsipmthdhistorystatsresp3xxin; //type: uint32
        YLeaf csbsipmthdhistorystatsresp3xxout; //type: uint32
        YLeaf csbsipmthdhistorystatsresp4xxin; //type: uint32
        YLeaf csbsipmthdhistorystatsresp4xxout; //type: uint32
        YLeaf csbsipmthdhistorystatsresp5xxin; //type: uint32
        YLeaf csbsipmthdhistorystatsresp5xxout; //type: uint32
        YLeaf csbsipmthdhistorystatsresp6xxin; //type: uint32
        YLeaf csbsipmthdhistorystatsresp6xxout; //type: uint32

}; // CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry


class CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable : public Entity
{
    public:
        Csbsipmthdrccurrentstatstable();
        ~Csbsipmthdrccurrentstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csbsipmthdrccurrentstatsentry; //type: CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry> > csbsipmthdrccurrentstatsentry;
        
}; // CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable


class CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry : public Entity
{
    public:
        Csbsipmthdrccurrentstatsentry();
        ~Csbsipmthdrccurrentstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        YLeaf csbcallstatsserviceindex;
        YLeaf csbsipmthdrccurrentstatsadjname; //type: string
        YLeaf csbsipmthdrccurrentstatsmethod; //type: CiscosbcsipmethodEnum
        YLeaf csbsipmthdrccurrentstatsrespcode; //type: uint32
        YLeaf csbsipmthdrccurrentstatsinterval; //type: CiscosbcperiodicstatsintervalEnum
        YLeaf csbsipmthdrccurrentstatsmethodname; //type: string
        YLeaf csbsipmthdrccurrentstatsrespin; //type: uint32
        YLeaf csbsipmthdrccurrentstatsrespout; //type: uint32

}; // CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry


class CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable : public Entity
{
    public:
        Csbsipmthdrchistorystatstable();
        ~Csbsipmthdrchistorystatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csbsipmthdrchistorystatsentry; //type: CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry> > csbsipmthdrchistorystatsentry;
        
}; // CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable


class CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry : public Entity
{
    public:
        Csbsipmthdrchistorystatsentry();
        ~Csbsipmthdrchistorystatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        YLeaf csbcallstatsserviceindex;
        YLeaf csbsipmthdrchistorystatsadjname; //type: string
        YLeaf csbsipmthdrchistorystatsmethod; //type: CiscosbcsipmethodEnum
        YLeaf csbsipmthdrchistorystatsrespcode; //type: uint32
        YLeaf csbsipmthdrchistorystatsinterval; //type: CiscosbcperiodicstatsintervalEnum
        YLeaf csbsipmthdrchistorystatsmethodname; //type: string
        YLeaf csbsipmthdrchistorystatsrespin; //type: uint32
        YLeaf csbsipmthdrchistorystatsrespout; //type: uint32

}; // CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry

class CiscosbcsipmethodEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf ack;
        static const Enum::YLeaf bye;
        static const Enum::YLeaf cancel;
        static const Enum::YLeaf info;
        static const Enum::YLeaf invite;
        static const Enum::YLeaf message;
        static const Enum::YLeaf notify;
        static const Enum::YLeaf options;
        static const Enum::YLeaf prack;
        static const Enum::YLeaf refer;
        static const Enum::YLeaf register;
        static const Enum::YLeaf subscribe;
        static const Enum::YLeaf update;

};

class CiscosbcradiusclienttypeEnum : public Enum
{
    public:
        static const Enum::YLeaf authentication;
        static const Enum::YLeaf accounting;

};


}
}

#endif /* _CISCO_SESS_BORDER_CTRLR_STATS_MIB_ */

