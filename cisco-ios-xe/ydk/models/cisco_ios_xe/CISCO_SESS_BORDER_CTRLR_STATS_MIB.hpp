#ifndef _CISCO_SESS_BORDER_CTRLR_STATS_MIB_
#define _CISCO_SESS_BORDER_CTRLR_STATS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_SESS_BORDER_CTRLR_STATS_MIB {

class CiscoSessBorderCtrlrStatsMib : public ydk::Entity
{
    public:
        CiscoSessBorderCtrlrStatsMib();
        ~CiscoSessBorderCtrlrStatsMib();

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


class CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable : public ydk::Entity
{
    public:
        Csbradiusstatstable();
        ~Csbradiusstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csbradiusstatsentry; //type: CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry> > csbradiusstatsentry;
        
}; // CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable


class CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry : public ydk::Entity
{
    public:
        Csbradiusstatsentry();
        ~Csbradiusstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbradiusstatsentindex; //type: uint32
        ydk::YLeaf csbradiusstatsclientname; //type: string
        ydk::YLeaf csbradiusstatsclienttype; //type: Ciscosbcradiusclienttype
        ydk::YLeaf csbradiusstatssrvrname; //type: string
        ydk::YLeaf csbradiusstatsacsreqs; //type: uint64
        ydk::YLeaf csbradiusstatsacsrtrns; //type: uint64
        ydk::YLeaf csbradiusstatsacsaccpts; //type: uint64
        ydk::YLeaf csbradiusstatsacsrejects; //type: uint64
        ydk::YLeaf csbradiusstatsacschalls; //type: uint64
        ydk::YLeaf csbradiusstatsactreqs; //type: uint64
        ydk::YLeaf csbradiusstatsactretrans; //type: uint64
        ydk::YLeaf csbradiusstatsactrsps; //type: uint64
        ydk::YLeaf csbradiusstatsmalformedrsps; //type: uint64
        ydk::YLeaf csbradiusstatsbadauths; //type: uint64
        ydk::YLeaf csbradiusstatspending; //type: uint32
        ydk::YLeaf csbradiusstatstimeouts; //type: uint64
        ydk::YLeaf csbradiusstatsunknowntype; //type: uint64
        ydk::YLeaf csbradiusstatsdropped; //type: uint64

}; // CiscoSessBorderCtrlrStatsMib::Csbradiusstatstable::Csbradiusstatsentry


class CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable : public ydk::Entity
{
    public:
        Csbrfbillrealmstatstable();
        ~Csbrfbillrealmstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csbrfbillrealmstatsentry; //type: CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry> > csbrfbillrealmstatsentry;
        
}; // CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable


class CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry : public ydk::Entity
{
    public:
        Csbrfbillrealmstatsentry();
        ~Csbrfbillrealmstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbrfbillrealmstatsindex; //type: uint32
        ydk::YLeaf csbrfbillrealmstatsrealmname; //type: string
        ydk::YLeaf csbrfbillrealmstatstotalstartacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatstotalinterimacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatstotalstopacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatstotaleventacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatssuccstartacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatssuccinterimacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatssuccstopacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatssucceventacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatsfailstartacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatsfailinterimacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatsfailstopacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatsfaileventacrs; //type: uint32

}; // CiscoSessBorderCtrlrStatsMib::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry


class CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable : public ydk::Entity
{
    public:
        Csbsipmthdcurrentstatstable();
        ~Csbsipmthdcurrentstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csbsipmthdcurrentstatsentry; //type: CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry> > csbsipmthdcurrentstatsentry;
        
}; // CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable


class CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry : public ydk::Entity
{
    public:
        Csbsipmthdcurrentstatsentry();
        ~Csbsipmthdcurrentstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbsipmthdcurrentstatsadjname; //type: string
        ydk::YLeaf csbsipmthdcurrentstatsmethod; //type: Ciscosbcsipmethod
        ydk::YLeaf csbsipmthdcurrentstatsinterval; //type: Ciscosbcperiodicstatsinterval
        ydk::YLeaf csbsipmthdcurrentstatsmethodname; //type: string
        ydk::YLeaf csbsipmthdcurrentstatsreqin; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsreqout; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp1xxin; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp1xxout; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp2xxin; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp2xxout; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp3xxin; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp3xxout; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp4xxin; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp4xxout; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp5xxin; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp5xxout; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp6xxin; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp6xxout; //type: uint32

}; // CiscoSessBorderCtrlrStatsMib::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry


class CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable : public ydk::Entity
{
    public:
        Csbsipmthdhistorystatstable();
        ~Csbsipmthdhistorystatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csbsipmthdhistorystatsentry; //type: CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry> > csbsipmthdhistorystatsentry;
        
}; // CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable


class CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry : public ydk::Entity
{
    public:
        Csbsipmthdhistorystatsentry();
        ~Csbsipmthdhistorystatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbsipmthdhistorystatsadjname; //type: string
        ydk::YLeaf csbsipmthdhistorystatsmethod; //type: Ciscosbcsipmethod
        ydk::YLeaf csbsipmthdhistorystatsinterval; //type: Ciscosbcperiodicstatsinterval
        ydk::YLeaf csbsipmthdhistorystatsmethodname; //type: string
        ydk::YLeaf csbsipmthdhistorystatsreqin; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsreqout; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp1xxin; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp1xxout; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp2xxin; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp2xxout; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp3xxin; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp3xxout; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp4xxin; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp4xxout; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp5xxin; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp5xxout; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp6xxin; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp6xxout; //type: uint32

}; // CiscoSessBorderCtrlrStatsMib::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry


class CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable : public ydk::Entity
{
    public:
        Csbsipmthdrccurrentstatstable();
        ~Csbsipmthdrccurrentstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csbsipmthdrccurrentstatsentry; //type: CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry> > csbsipmthdrccurrentstatsentry;
        
}; // CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable


class CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry : public ydk::Entity
{
    public:
        Csbsipmthdrccurrentstatsentry();
        ~Csbsipmthdrccurrentstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbsipmthdrccurrentstatsadjname; //type: string
        ydk::YLeaf csbsipmthdrccurrentstatsmethod; //type: Ciscosbcsipmethod
        ydk::YLeaf csbsipmthdrccurrentstatsrespcode; //type: uint32
        ydk::YLeaf csbsipmthdrccurrentstatsinterval; //type: Ciscosbcperiodicstatsinterval
        ydk::YLeaf csbsipmthdrccurrentstatsmethodname; //type: string
        ydk::YLeaf csbsipmthdrccurrentstatsrespin; //type: uint32
        ydk::YLeaf csbsipmthdrccurrentstatsrespout; //type: uint32

}; // CiscoSessBorderCtrlrStatsMib::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry


class CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable : public ydk::Entity
{
    public:
        Csbsipmthdrchistorystatstable();
        ~Csbsipmthdrchistorystatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csbsipmthdrchistorystatsentry; //type: CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_STATS_MIB::CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry> > csbsipmthdrchistorystatsentry;
        
}; // CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable


class CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry : public ydk::Entity
{
    public:
        Csbsipmthdrchistorystatsentry();
        ~Csbsipmthdrchistorystatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbsipmthdrchistorystatsadjname; //type: string
        ydk::YLeaf csbsipmthdrchistorystatsmethod; //type: Ciscosbcsipmethod
        ydk::YLeaf csbsipmthdrchistorystatsrespcode; //type: uint32
        ydk::YLeaf csbsipmthdrchistorystatsinterval; //type: Ciscosbcperiodicstatsinterval
        ydk::YLeaf csbsipmthdrchistorystatsmethodname; //type: string
        ydk::YLeaf csbsipmthdrchistorystatsrespin; //type: uint32
        ydk::YLeaf csbsipmthdrchistorystatsrespout; //type: uint32

}; // CiscoSessBorderCtrlrStatsMib::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry

class Ciscosbcradiusclienttype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf authentication;
        static const ydk::Enum::YLeaf accounting;

};

class Ciscosbcsipmethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ack;
        static const ydk::Enum::YLeaf bye;
        static const ydk::Enum::YLeaf cancel;
        static const ydk::Enum::YLeaf info;
        static const ydk::Enum::YLeaf invite;
        static const ydk::Enum::YLeaf message;
        static const ydk::Enum::YLeaf notify;
        static const ydk::Enum::YLeaf options;
        static const ydk::Enum::YLeaf prack;
        static const ydk::Enum::YLeaf refer;
        static const ydk::Enum::YLeaf register_;
        static const ydk::Enum::YLeaf subscribe;
        static const ydk::Enum::YLeaf update;

};


}
}

#endif /* _CISCO_SESS_BORDER_CTRLR_STATS_MIB_ */

