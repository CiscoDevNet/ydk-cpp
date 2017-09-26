#ifndef _CISCO_SESS_BORDER_CTRLR_STATS_MIB_
#define _CISCO_SESS_BORDER_CTRLR_STATS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_SESS_BORDER_CTRLR_STATS_MIB {

class CISCOSESSBORDERCTRLRSTATSMIB : public ydk::Entity
{
    public:
        CISCOSESSBORDERCTRLRSTATSMIB();
        ~CISCOSESSBORDERCTRLRSTATSMIB();

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

        class Csbradiusstatstable; //type: CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable
        class Csbrfbillrealmstatstable; //type: CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable
        class Csbsipmthdcurrentstatstable; //type: CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable
        class Csbsipmthdhistorystatstable; //type: CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable
        class Csbsipmthdrccurrentstatstable; //type: CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable
        class Csbsipmthdrchistorystatstable; //type: CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable

        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable> csbradiusstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable> csbrfbillrealmstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable> csbsipmthdcurrentstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable> csbsipmthdhistorystatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable> csbsipmthdrccurrentstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable> csbsipmthdrchistorystatstable;
        
}; // CISCOSESSBORDERCTRLRSTATSMIB


class CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable : public ydk::Entity
{
    public:
        Csbradiusstatstable();
        ~Csbradiusstatstable();

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

        class Csbradiusstatsentry; //type: CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatsentry> > csbradiusstatsentry;
        
}; // CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable


class CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatsentry : public ydk::Entity
{
    public:
        Csbradiusstatsentry();
        ~Csbradiusstatsentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbradiusstatsentindex; //type: uint32
        ydk::YLeaf csbradiusstatsclientname; //type: string
        ydk::YLeaf csbradiusstatsclienttype; //type: CiscoSbcRadiusClientType
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

}; // CISCOSESSBORDERCTRLRSTATSMIB::Csbradiusstatstable::Csbradiusstatsentry


class CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable : public ydk::Entity
{
    public:
        Csbrfbillrealmstatstable();
        ~Csbrfbillrealmstatstable();

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

        class Csbrfbillrealmstatsentry; //type: CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry> > csbrfbillrealmstatsentry;
        
}; // CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable


class CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry : public ydk::Entity
{
    public:
        Csbrfbillrealmstatsentry();
        ~Csbrfbillrealmstatsentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
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

}; // CISCOSESSBORDERCTRLRSTATSMIB::Csbrfbillrealmstatstable::Csbrfbillrealmstatsentry


class CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable : public ydk::Entity
{
    public:
        Csbsipmthdcurrentstatstable();
        ~Csbsipmthdcurrentstatstable();

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

        class Csbsipmthdcurrentstatsentry; //type: CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry> > csbsipmthdcurrentstatsentry;
        
}; // CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable


class CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry : public ydk::Entity
{
    public:
        Csbsipmthdcurrentstatsentry();
        ~Csbsipmthdcurrentstatsentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbsipmthdcurrentstatsadjname; //type: string
        ydk::YLeaf csbsipmthdcurrentstatsmethod; //type: CiscoSbcSIPMethod
        ydk::YLeaf csbsipmthdcurrentstatsinterval; //type: CiscoSbcPeriodicStatsInterval
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

}; // CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdcurrentstatstable::Csbsipmthdcurrentstatsentry


class CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable : public ydk::Entity
{
    public:
        Csbsipmthdhistorystatstable();
        ~Csbsipmthdhistorystatstable();

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

        class Csbsipmthdhistorystatsentry; //type: CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry> > csbsipmthdhistorystatsentry;
        
}; // CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable


class CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry : public ydk::Entity
{
    public:
        Csbsipmthdhistorystatsentry();
        ~Csbsipmthdhistorystatsentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbsipmthdhistorystatsadjname; //type: string
        ydk::YLeaf csbsipmthdhistorystatsmethod; //type: CiscoSbcSIPMethod
        ydk::YLeaf csbsipmthdhistorystatsinterval; //type: CiscoSbcPeriodicStatsInterval
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

}; // CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdhistorystatstable::Csbsipmthdhistorystatsentry


class CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable : public ydk::Entity
{
    public:
        Csbsipmthdrccurrentstatstable();
        ~Csbsipmthdrccurrentstatstable();

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

        class Csbsipmthdrccurrentstatsentry; //type: CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry> > csbsipmthdrccurrentstatsentry;
        
}; // CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable


class CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry : public ydk::Entity
{
    public:
        Csbsipmthdrccurrentstatsentry();
        ~Csbsipmthdrccurrentstatsentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbsipmthdrccurrentstatsadjname; //type: string
        ydk::YLeaf csbsipmthdrccurrentstatsmethod; //type: CiscoSbcSIPMethod
        ydk::YLeaf csbsipmthdrccurrentstatsrespcode; //type: uint32
        ydk::YLeaf csbsipmthdrccurrentstatsinterval; //type: CiscoSbcPeriodicStatsInterval
        ydk::YLeaf csbsipmthdrccurrentstatsmethodname; //type: string
        ydk::YLeaf csbsipmthdrccurrentstatsrespin; //type: uint32
        ydk::YLeaf csbsipmthdrccurrentstatsrespout; //type: uint32

}; // CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrccurrentstatstable::Csbsipmthdrccurrentstatsentry


class CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable : public ydk::Entity
{
    public:
        Csbsipmthdrchistorystatstable();
        ~Csbsipmthdrchistorystatstable();

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

        class Csbsipmthdrchistorystatsentry; //type: CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry> > csbsipmthdrchistorystatsentry;
        
}; // CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable


class CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry : public ydk::Entity
{
    public:
        Csbsipmthdrchistorystatsentry();
        ~Csbsipmthdrchistorystatsentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbsipmthdrchistorystatsadjname; //type: string
        ydk::YLeaf csbsipmthdrchistorystatsmethod; //type: CiscoSbcSIPMethod
        ydk::YLeaf csbsipmthdrchistorystatsrespcode; //type: uint32
        ydk::YLeaf csbsipmthdrchistorystatsinterval; //type: CiscoSbcPeriodicStatsInterval
        ydk::YLeaf csbsipmthdrchistorystatsmethodname; //type: string
        ydk::YLeaf csbsipmthdrchistorystatsrespin; //type: uint32
        ydk::YLeaf csbsipmthdrchistorystatsrespout; //type: uint32

}; // CISCOSESSBORDERCTRLRSTATSMIB::Csbsipmthdrchistorystatstable::Csbsipmthdrchistorystatsentry

class CiscoSbcRadiusClientType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf authentication;
        static const ydk::Enum::YLeaf accounting;

};

class CiscoSbcSIPMethod : public ydk::Enum
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

