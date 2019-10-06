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

        class Cdot3OamTable; //type: CISCODOT3OAMMIB::Cdot3OamTable
        class Cdot3OamPeerTable; //type: CISCODOT3OAMMIB::Cdot3OamPeerTable
        class Cdot3OamLoopbackTable; //type: CISCODOT3OAMMIB::Cdot3OamLoopbackTable
        class Cdot3OamStatsTable; //type: CISCODOT3OAMMIB::Cdot3OamStatsTable
        class Cdot3OamEventConfigTable; //type: CISCODOT3OAMMIB::Cdot3OamEventConfigTable
        class Cdot3OamEventLogTable; //type: CISCODOT3OAMMIB::Cdot3OamEventLogTable

        std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3OamTable> cdot3oamtable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3OamPeerTable> cdot3oampeertable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3OamLoopbackTable> cdot3oamloopbacktable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3OamStatsTable> cdot3oamstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3OamEventConfigTable> cdot3oameventconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_DOT3_OAM_MIB::CISCODOT3OAMMIB::Cdot3OamEventLogTable> cdot3oameventlogtable;
        
}; // CISCODOT3OAMMIB


class CISCODOT3OAMMIB::Cdot3OamTable : public ydk::Entity
{
    public:
        Cdot3OamTable();
        ~Cdot3OamTable();

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

        class Cdot3OamEntry; //type: CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry

        ydk::YList cdot3oamentry;
        
}; // CISCODOT3OAMMIB::Cdot3OamTable


class CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry : public ydk::Entity
{
    public:
        Cdot3OamEntry();
        ~Cdot3OamEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdot3oamadminstate; //type: Cdot3OamAdminState
        ydk::YLeaf cdot3oamoperstatus; //type: Cdot3OamOperStatus
        ydk::YLeaf cdot3oammode; //type: Cdot3OamMode
        ydk::YLeaf cdot3oammaxoampdusize; //type: uint32
        ydk::YLeaf cdot3oamconfigrevision; //type: uint32
        ydk::YLeaf cdot3oamfunctionssupported; //type: Cdot3OamFunctionsSupported
        class Cdot3OamAdminState;
        class Cdot3OamOperStatus;
        class Cdot3OamMode;

}; // CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry


class CISCODOT3OAMMIB::Cdot3OamPeerTable : public ydk::Entity
{
    public:
        Cdot3OamPeerTable();
        ~Cdot3OamPeerTable();

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

        class Cdot3OamPeerEntry; //type: CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry

        ydk::YList cdot3oampeerentry;
        
}; // CISCODOT3OAMMIB::Cdot3OamPeerTable


class CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry : public ydk::Entity
{
    public:
        Cdot3OamPeerEntry();
        ~Cdot3OamPeerEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdot3oampeermacaddress; //type: string
        ydk::YLeaf cdot3oampeervendoroui; //type: binary
        ydk::YLeaf cdot3oampeervendorinfo; //type: uint32
        ydk::YLeaf cdot3oampeermode; //type: Cdot3OamPeerMode
        ydk::YLeaf cdot3oampeermaxoampdusize; //type: uint32
        ydk::YLeaf cdot3oampeerconfigrevision; //type: uint32
        ydk::YLeaf cdot3oampeerfunctionssupported; //type: Cdot3OamPeerFunctionsSupported
        class Cdot3OamPeerMode;

}; // CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry


class CISCODOT3OAMMIB::Cdot3OamLoopbackTable : public ydk::Entity
{
    public:
        Cdot3OamLoopbackTable();
        ~Cdot3OamLoopbackTable();

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

        class Cdot3OamLoopbackEntry; //type: CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry

        ydk::YList cdot3oamloopbackentry;
        
}; // CISCODOT3OAMMIB::Cdot3OamLoopbackTable


class CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry : public ydk::Entity
{
    public:
        Cdot3OamLoopbackEntry();
        ~Cdot3OamLoopbackEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdot3oamloopbackstatus; //type: Cdot3OamLoopbackStatus
        ydk::YLeaf cdot3oamloopbackignorerx; //type: Cdot3OamLoopbackIgnoreRx
        class Cdot3OamLoopbackStatus;
        class Cdot3OamLoopbackIgnoreRx;

}; // CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry


class CISCODOT3OAMMIB::Cdot3OamStatsTable : public ydk::Entity
{
    public:
        Cdot3OamStatsTable();
        ~Cdot3OamStatsTable();

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

        class Cdot3OamStatsEntry; //type: CISCODOT3OAMMIB::Cdot3OamStatsTable::Cdot3OamStatsEntry

        ydk::YList cdot3oamstatsentry;
        
}; // CISCODOT3OAMMIB::Cdot3OamStatsTable


class CISCODOT3OAMMIB::Cdot3OamStatsTable::Cdot3OamStatsEntry : public ydk::Entity
{
    public:
        Cdot3OamStatsEntry();
        ~Cdot3OamStatsEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
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

}; // CISCODOT3OAMMIB::Cdot3OamStatsTable::Cdot3OamStatsEntry


class CISCODOT3OAMMIB::Cdot3OamEventConfigTable : public ydk::Entity
{
    public:
        Cdot3OamEventConfigTable();
        ~Cdot3OamEventConfigTable();

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

        class Cdot3OamEventConfigEntry; //type: CISCODOT3OAMMIB::Cdot3OamEventConfigTable::Cdot3OamEventConfigEntry

        ydk::YList cdot3oameventconfigentry;
        
}; // CISCODOT3OAMMIB::Cdot3OamEventConfigTable


class CISCODOT3OAMMIB::Cdot3OamEventConfigTable::Cdot3OamEventConfigEntry : public ydk::Entity
{
    public:
        Cdot3OamEventConfigEntry();
        ~Cdot3OamEventConfigEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
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

}; // CISCODOT3OAMMIB::Cdot3OamEventConfigTable::Cdot3OamEventConfigEntry


class CISCODOT3OAMMIB::Cdot3OamEventLogTable : public ydk::Entity
{
    public:
        Cdot3OamEventLogTable();
        ~Cdot3OamEventLogTable();

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

        class Cdot3OamEventLogEntry; //type: CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry

        ydk::YList cdot3oameventlogentry;
        
}; // CISCODOT3OAMMIB::Cdot3OamEventLogTable


class CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry : public ydk::Entity
{
    public:
        Cdot3OamEventLogEntry();
        ~Cdot3OamEventLogEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cdot3oameventlogindex; //type: uint32
        ydk::YLeaf cdot3oameventlogtimestamp; //type: uint32
        ydk::YLeaf cdot3oameventlogoui; //type: binary
        ydk::YLeaf cdot3oameventlogtype; //type: uint32
        ydk::YLeaf cdot3oameventloglocation; //type: Cdot3OamEventLogLocation
        ydk::YLeaf cdot3oameventlogwindowhi; //type: uint32
        ydk::YLeaf cdot3oameventlogwindowlo; //type: uint32
        ydk::YLeaf cdot3oameventlogthresholdhi; //type: uint32
        ydk::YLeaf cdot3oameventlogthresholdlo; //type: uint32
        ydk::YLeaf cdot3oameventlogvalue; //type: uint64
        ydk::YLeaf cdot3oameventlogrunningtotal; //type: uint64
        ydk::YLeaf cdot3oameventlogeventtotal; //type: uint32
        class Cdot3OamEventLogLocation;

}; // CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry

class CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 1;
            if (name == "enabled") return 2;
            return -1;
        }
};

class CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamOperStatus : public ydk::Enum
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

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 1;
            if (name == "linkFault") return 2;
            if (name == "passiveWait") return 3;
            if (name == "activeSendLocal") return 4;
            if (name == "sendLocalAndRemote") return 5;
            if (name == "sendLocalAndRemoteOk") return 6;
            if (name == "oamPeeringLocallyRejected") return 7;
            if (name == "oamPeeringRemotelyRejected") return 8;
            if (name == "operational") return 9;
            if (name == "nonOperHalfDuplex") return 10;
            return -1;
        }
};

class CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 1;
            if (name == "passive") return 2;
            return -1;
        }
};

class CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry::Cdot3OamPeerMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 1;
            if (name == "passive") return 2;
            if (name == "unknown") return 3;
            return -1;
        }
};

class CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::Cdot3OamLoopbackStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noLoopback;
        static const ydk::Enum::YLeaf initiatingLoopback;
        static const ydk::Enum::YLeaf remoteLoopback;
        static const ydk::Enum::YLeaf terminatingLoopback;
        static const ydk::Enum::YLeaf localLoopback;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "noLoopback") return 1;
            if (name == "initiatingLoopback") return 2;
            if (name == "remoteLoopback") return 3;
            if (name == "terminatingLoopback") return 4;
            if (name == "localLoopback") return 5;
            if (name == "unknown") return 6;
            return -1;
        }
};

class CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::Cdot3OamLoopbackIgnoreRx : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ignore;
        static const ydk::Enum::YLeaf process;

        static int get_enum_value(const std::string & name) {
            if (name == "ignore") return 1;
            if (name == "process") return 2;
            return -1;
        }
};

class CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry::Cdot3OamEventLogLocation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;

        static int get_enum_value(const std::string & name) {
            if (name == "local") return 1;
            if (name == "remote") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_DOT3_OAM_MIB_ */

