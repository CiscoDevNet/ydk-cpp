#ifndef _CISCO_DOT3_OAM_MIB_
#define _CISCO_DOT3_OAM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_DOT3_OAM_MIB {

class CISCODOT3OAMMIB : public ydk::Entity
{
    public:
        CISCODOT3OAMMIB();
        ~CISCODOT3OAMMIB();

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

        class Cdot3Oamtable; //type: CISCODOT3OAMMIB::Cdot3Oamtable
        class Cdot3Oampeertable; //type: CISCODOT3OAMMIB::Cdot3Oampeertable
        class Cdot3Oamloopbacktable; //type: CISCODOT3OAMMIB::Cdot3Oamloopbacktable
        class Cdot3Oamstatstable; //type: CISCODOT3OAMMIB::Cdot3Oamstatstable
        class Cdot3Oameventconfigtable; //type: CISCODOT3OAMMIB::Cdot3Oameventconfigtable
        class Cdot3Oameventlogtable; //type: CISCODOT3OAMMIB::Cdot3Oameventlogtable

        std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3Oameventconfigtable> cdot3oameventconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3Oameventlogtable> cdot3oameventlogtable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3Oamloopbacktable> cdot3oamloopbacktable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3Oampeertable> cdot3oampeertable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3Oamstatstable> cdot3oamstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3Oamtable> cdot3oamtable;
        
}; // CISCODOT3OAMMIB


class CISCODOT3OAMMIB::Cdot3Oameventconfigtable : public ydk::Entity
{
    public:
        Cdot3Oameventconfigtable();
        ~Cdot3Oameventconfigtable();

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

        class Cdot3Oameventconfigentry; //type: CISCODOT3OAMMIB::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry> > cdot3oameventconfigentry;
        
}; // CISCODOT3OAMMIB::Cdot3Oameventconfigtable


class CISCODOT3OAMMIB::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry : public ydk::Entity
{
    public:
        Cdot3Oameventconfigentry();
        ~Cdot3Oameventconfigentry();

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
        ydk::YLeaf cdot3oamerrsymperiodwindowhi; //type: uint32
        ydk::YLeaf cdot3oamerrsymperiodwindowlo; //type: uint32
        ydk::YLeaf cdot3oamerrsymperiodthresholdhi; //type: uint32
        ydk::YLeaf cdot3oamerrsymperiodthresholdlo; //type: uint32
        ydk::YLeaf cdot3oamerrsymperiodevnotifenable; //type: boolean
        ydk::YLeaf cdot3oamerrframeperiodwindow; //type: uint32
        ydk::YLeaf cdot3oamerrframeperiodthreshold; //type: uint32
        ydk::YLeaf cdot3oamerrframeperiodevnotifenable; //type: boolean
        ydk::YLeaf cdot3oamerrframewindow; //type: uint32
        ydk::YLeaf cdot3oamerrframethreshold; //type: uint32
        ydk::YLeaf cdot3oamerrframeevnotifenable; //type: boolean
        ydk::YLeaf cdot3oamerrframesecssummarywindow; //type: int32
        ydk::YLeaf cdot3oamerrframesecssummarythreshold; //type: int32
        ydk::YLeaf cdot3oamerrframesecsevnotifenable; //type: boolean
        ydk::YLeaf cdot3oamdyinggaspenable; //type: boolean
        ydk::YLeaf cdot3oamcriticaleventenable; //type: boolean

}; // CISCODOT3OAMMIB::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry


class CISCODOT3OAMMIB::Cdot3Oameventlogtable : public ydk::Entity
{
    public:
        Cdot3Oameventlogtable();
        ~Cdot3Oameventlogtable();

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

        class Cdot3Oameventlogentry; //type: CISCODOT3OAMMIB::Cdot3Oameventlogtable::Cdot3Oameventlogentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3Oameventlogtable::Cdot3Oameventlogentry> > cdot3oameventlogentry;
        
}; // CISCODOT3OAMMIB::Cdot3Oameventlogtable


class CISCODOT3OAMMIB::Cdot3Oameventlogtable::Cdot3Oameventlogentry : public ydk::Entity
{
    public:
        Cdot3Oameventlogentry();
        ~Cdot3Oameventlogentry();

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
        ydk::YLeaf cdot3oameventlogindex; //type: uint32
        ydk::YLeaf cdot3oameventlogtimestamp; //type: uint32
        ydk::YLeaf cdot3oameventlogoui; //type: binary
        ydk::YLeaf cdot3oameventlogtype; //type: uint32
        ydk::YLeaf cdot3oameventloglocation; //type: Cdot3Oameventloglocation
        ydk::YLeaf cdot3oameventlogwindowhi; //type: uint32
        ydk::YLeaf cdot3oameventlogwindowlo; //type: uint32
        ydk::YLeaf cdot3oameventlogthresholdhi; //type: uint32
        ydk::YLeaf cdot3oameventlogthresholdlo; //type: uint32
        ydk::YLeaf cdot3oameventlogvalue; //type: uint64
        ydk::YLeaf cdot3oameventlogrunningtotal; //type: uint64
        ydk::YLeaf cdot3oameventlogeventtotal; //type: uint32
        class Cdot3Oameventloglocation;

}; // CISCODOT3OAMMIB::Cdot3Oameventlogtable::Cdot3Oameventlogentry


class CISCODOT3OAMMIB::Cdot3Oamloopbacktable : public ydk::Entity
{
    public:
        Cdot3Oamloopbacktable();
        ~Cdot3Oamloopbacktable();

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

        class Cdot3Oamloopbackentry; //type: CISCODOT3OAMMIB::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry> > cdot3oamloopbackentry;
        
}; // CISCODOT3OAMMIB::Cdot3Oamloopbacktable


class CISCODOT3OAMMIB::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry : public ydk::Entity
{
    public:
        Cdot3Oamloopbackentry();
        ~Cdot3Oamloopbackentry();

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
        ydk::YLeaf cdot3oamloopbackstatus; //type: Cdot3Oamloopbackstatus
        ydk::YLeaf cdot3oamloopbackignorerx; //type: Cdot3Oamloopbackignorerx
        class Cdot3Oamloopbackstatus;
        class Cdot3Oamloopbackignorerx;

}; // CISCODOT3OAMMIB::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry


class CISCODOT3OAMMIB::Cdot3Oampeertable : public ydk::Entity
{
    public:
        Cdot3Oampeertable();
        ~Cdot3Oampeertable();

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

        class Cdot3Oampeerentry; //type: CISCODOT3OAMMIB::Cdot3Oampeertable::Cdot3Oampeerentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3Oampeertable::Cdot3Oampeerentry> > cdot3oampeerentry;
        
}; // CISCODOT3OAMMIB::Cdot3Oampeertable


class CISCODOT3OAMMIB::Cdot3Oampeertable::Cdot3Oampeerentry : public ydk::Entity
{
    public:
        Cdot3Oampeerentry();
        ~Cdot3Oampeerentry();

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
        ydk::YLeaf cdot3oampeermacaddress; //type: string
        ydk::YLeaf cdot3oampeervendoroui; //type: binary
        ydk::YLeaf cdot3oampeervendorinfo; //type: uint32
        ydk::YLeaf cdot3oampeermode; //type: Cdot3Oampeermode
        ydk::YLeaf cdot3oampeermaxoampdusize; //type: uint32
        ydk::YLeaf cdot3oampeerconfigrevision; //type: uint32
        ydk::YLeaf cdot3oampeerfunctionssupported; //type: Cdot3Oampeerfunctionssupported
        class Cdot3Oampeermode;

}; // CISCODOT3OAMMIB::Cdot3Oampeertable::Cdot3Oampeerentry


class CISCODOT3OAMMIB::Cdot3Oamstatstable : public ydk::Entity
{
    public:
        Cdot3Oamstatstable();
        ~Cdot3Oamstatstable();

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

        class Cdot3Oamstatsentry; //type: CISCODOT3OAMMIB::Cdot3Oamstatstable::Cdot3Oamstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3Oamstatstable::Cdot3Oamstatsentry> > cdot3oamstatsentry;
        
}; // CISCODOT3OAMMIB::Cdot3Oamstatstable


class CISCODOT3OAMMIB::Cdot3Oamstatstable::Cdot3Oamstatsentry : public ydk::Entity
{
    public:
        Cdot3Oamstatsentry();
        ~Cdot3Oamstatsentry();

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
        ydk::YLeaf cdot3oaminformationtx; //type: uint32
        ydk::YLeaf cdot3oaminformationrx; //type: uint32
        ydk::YLeaf cdot3oamuniqueeventnotificationtx; //type: uint32
        ydk::YLeaf cdot3oamuniqueeventnotificationrx; //type: uint32
        ydk::YLeaf cdot3oamduplicateeventnotificationtx; //type: uint32
        ydk::YLeaf cdot3oamduplicateeventnotificationrx; //type: uint32
        ydk::YLeaf cdot3oamloopbackcontroltx; //type: uint32
        ydk::YLeaf cdot3oamloopbackcontrolrx; //type: uint32
        ydk::YLeaf cdot3oamvariablerequesttx; //type: uint32
        ydk::YLeaf cdot3oamvariablerequestrx; //type: uint32
        ydk::YLeaf cdot3oamvariableresponsetx; //type: uint32
        ydk::YLeaf cdot3oamvariableresponserx; //type: uint32
        ydk::YLeaf cdot3oamorgspecifictx; //type: uint32
        ydk::YLeaf cdot3oamorgspecificrx; //type: uint32
        ydk::YLeaf cdot3oamunsupportedcodestx; //type: uint32
        ydk::YLeaf cdot3oamunsupportedcodesrx; //type: uint32
        ydk::YLeaf cdot3oamframeslostduetooam; //type: uint32

}; // CISCODOT3OAMMIB::Cdot3Oamstatstable::Cdot3Oamstatsentry


class CISCODOT3OAMMIB::Cdot3Oamtable : public ydk::Entity
{
    public:
        Cdot3Oamtable();
        ~Cdot3Oamtable();

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

        class Cdot3Oamentry; //type: CISCODOT3OAMMIB::Cdot3Oamtable::Cdot3Oamentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3Oamtable::Cdot3Oamentry> > cdot3oamentry;
        
}; // CISCODOT3OAMMIB::Cdot3Oamtable


class CISCODOT3OAMMIB::Cdot3Oamtable::Cdot3Oamentry : public ydk::Entity
{
    public:
        Cdot3Oamentry();
        ~Cdot3Oamentry();

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
        ydk::YLeaf cdot3oamadminstate; //type: Cdot3Oamadminstate
        ydk::YLeaf cdot3oamoperstatus; //type: Cdot3Oamoperstatus
        ydk::YLeaf cdot3oammode; //type: Cdot3Oammode
        ydk::YLeaf cdot3oammaxoampdusize; //type: uint32
        ydk::YLeaf cdot3oamconfigrevision; //type: uint32
        ydk::YLeaf cdot3oamfunctionssupported; //type: Cdot3Oamfunctionssupported
        class Cdot3Oamadminstate;
        class Cdot3Oamoperstatus;
        class Cdot3Oammode;

}; // CISCODOT3OAMMIB::Cdot3Oamtable::Cdot3Oamentry

class CISCODOT3OAMMIB::Cdot3Oameventlogtable::Cdot3Oameventlogentry::Cdot3Oameventloglocation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;

};

class CISCODOT3OAMMIB::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3Oamloopbackstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noLoopback;
        static const ydk::Enum::YLeaf initiatingLoopback;
        static const ydk::Enum::YLeaf remoteLoopback;
        static const ydk::Enum::YLeaf terminatingLoopback;
        static const ydk::Enum::YLeaf localLoopback;
        static const ydk::Enum::YLeaf unknown;

};

class CISCODOT3OAMMIB::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3Oamloopbackignorerx : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ignore;
        static const ydk::Enum::YLeaf process;

};

class CISCODOT3OAMMIB::Cdot3Oampeertable::Cdot3Oampeerentry::Cdot3Oampeermode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf unknown;

};

class CISCODOT3OAMMIB::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oamadminstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};

class CISCODOT3OAMMIB::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oamoperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf linkFault;
        static const ydk::Enum::YLeaf passiveWait;
        static const ydk::Enum::YLeaf activeSendLocal;
        static const ydk::Enum::YLeaf sendLocalAndRemote;
        static const ydk::Enum::YLeaf sendLocalAndRemoteOk;
        static const ydk::Enum::YLeaf oamPeeringLocallyRejected;
        static const ydk::Enum::YLeaf oamPeeringRemotelyRejected;
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf nonOperHalfDuplex;

};

class CISCODOT3OAMMIB::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oammode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;

};


}
}

#endif /* _CISCO_DOT3_OAM_MIB_ */

