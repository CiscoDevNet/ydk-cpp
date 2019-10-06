#ifndef _BRIDGE_MIB_
#define _BRIDGE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace BRIDGE_MIB {

class BRIDGEMIB : public ydk::Entity
{
    public:
        BRIDGEMIB();
        ~BRIDGEMIB();

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

        class Dot1dBase; //type: BRIDGEMIB::Dot1dBase
        class Dot1dStp; //type: BRIDGEMIB::Dot1dStp
        class Dot1dTp; //type: BRIDGEMIB::Dot1dTp
        class Dot1dBasePortTable; //type: BRIDGEMIB::Dot1dBasePortTable
        class Dot1dStpPortTable; //type: BRIDGEMIB::Dot1dStpPortTable
        class Dot1dTpFdbTable; //type: BRIDGEMIB::Dot1dTpFdbTable
        class Dot1dTpPortTable; //type: BRIDGEMIB::Dot1dTpPortTable
        class Dot1dStaticTable; //type: BRIDGEMIB::Dot1dStaticTable

        std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1dBase> dot1dbase;
        std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1dStp> dot1dstp;
        std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1dTp> dot1dtp;
        std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1dBasePortTable> dot1dbaseporttable;
        std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1dStpPortTable> dot1dstpporttable;
        std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1dTpFdbTable> dot1dtpfdbtable;
        std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1dTpPortTable> dot1dtpporttable;
        std::shared_ptr<cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1dStaticTable> dot1dstatictable;
        
}; // BRIDGEMIB


class BRIDGEMIB::Dot1dBase : public ydk::Entity
{
    public:
        Dot1dBase();
        ~Dot1dBase();

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

        ydk::YLeaf dot1dbasebridgeaddress; //type: string
        ydk::YLeaf dot1dbasenumports; //type: int32
        ydk::YLeaf dot1dbasetype; //type: Dot1dBaseType
        class Dot1dBaseType;

}; // BRIDGEMIB::Dot1dBase


class BRIDGEMIB::Dot1dStp : public ydk::Entity
{
    public:
        Dot1dStp();
        ~Dot1dStp();

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

        ydk::YLeaf dot1dstpprotocolspecification; //type: Dot1dStpProtocolSpecification
        ydk::YLeaf dot1dstppriority; //type: int32
        ydk::YLeaf dot1dstptimesincetopologychange; //type: uint32
        ydk::YLeaf dot1dstptopchanges; //type: uint32
        ydk::YLeaf dot1dstpdesignatedroot; //type: binary
        ydk::YLeaf dot1dstprootcost; //type: int32
        ydk::YLeaf dot1dstprootport; //type: int32
        ydk::YLeaf dot1dstpmaxage; //type: int32
        ydk::YLeaf dot1dstphellotime; //type: int32
        ydk::YLeaf dot1dstpholdtime; //type: int32
        ydk::YLeaf dot1dstpforwarddelay; //type: int32
        ydk::YLeaf dot1dstpbridgemaxage; //type: int32
        ydk::YLeaf dot1dstpbridgehellotime; //type: int32
        ydk::YLeaf dot1dstpbridgeforwarddelay; //type: int32
        class Dot1dStpProtocolSpecification;

}; // BRIDGEMIB::Dot1dStp


class BRIDGEMIB::Dot1dTp : public ydk::Entity
{
    public:
        Dot1dTp();
        ~Dot1dTp();

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

        ydk::YLeaf dot1dtplearnedentrydiscards; //type: uint32
        ydk::YLeaf dot1dtpagingtime; //type: int32

}; // BRIDGEMIB::Dot1dTp


class BRIDGEMIB::Dot1dBasePortTable : public ydk::Entity
{
    public:
        Dot1dBasePortTable();
        ~Dot1dBasePortTable();

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

        class Dot1dBasePortEntry; //type: BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry

        ydk::YList dot1dbaseportentry;
        
}; // BRIDGEMIB::Dot1dBasePortTable


class BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry : public ydk::Entity
{
    public:
        Dot1dBasePortEntry();
        ~Dot1dBasePortEntry();

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

        ydk::YLeaf dot1dbaseport; //type: int32
        ydk::YLeaf dot1dbaseportifindex; //type: int32
        ydk::YLeaf dot1dbaseportcircuit; //type: string
        ydk::YLeaf dot1dbaseportdelayexceededdiscards; //type: uint32
        ydk::YLeaf dot1dbaseportmtuexceededdiscards; //type: uint32
        ydk::YLeaf dot1dportcapabilities; //type: Dot1dPortCapabilities
        ydk::YLeaf dot1dportdefaultuserpriority; //type: int32
        ydk::YLeaf dot1dportnumtrafficclasses; //type: int32
        ydk::YLeaf dot1dportgarpjointime; //type: int32
        ydk::YLeaf dot1dportgarpleavetime; //type: int32
        ydk::YLeaf dot1dportgarpleavealltime; //type: int32
        ydk::YLeaf dot1dportgmrpstatus; //type: EnabledStatus
        ydk::YLeaf dot1dportgmrpfailedregistrations; //type: uint32
        ydk::YLeaf dot1dportgmrplastpduorigin; //type: string
        ydk::YLeaf dot1dportrestrictedgroupregistration; //type: boolean
        ydk::YLeaf dot1qpvid; //type: uint32
        ydk::YLeaf dot1qportacceptableframetypes; //type: Dot1qPortAcceptableFrameTypes
        ydk::YLeaf dot1qportingressfiltering; //type: boolean
        ydk::YLeaf dot1qportgvrpstatus; //type: EnabledStatus
        ydk::YLeaf dot1qportgvrpfailedregistrations; //type: uint32
        ydk::YLeaf dot1qportgvrplastpduorigin; //type: string
        ydk::YLeaf dot1qportrestrictedvlanregistration; //type: boolean
        class Dot1qPortAcceptableFrameTypes;

}; // BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry


class BRIDGEMIB::Dot1dStpPortTable : public ydk::Entity
{
    public:
        Dot1dStpPortTable();
        ~Dot1dStpPortTable();

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

        class Dot1dStpPortEntry; //type: BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry

        ydk::YList dot1dstpportentry;
        
}; // BRIDGEMIB::Dot1dStpPortTable


class BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry : public ydk::Entity
{
    public:
        Dot1dStpPortEntry();
        ~Dot1dStpPortEntry();

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

        ydk::YLeaf dot1dstpport; //type: int32
        ydk::YLeaf dot1dstpportpriority; //type: int32
        ydk::YLeaf dot1dstpportstate; //type: Dot1dStpPortState
        ydk::YLeaf dot1dstpportenable; //type: Dot1dStpPortEnable
        ydk::YLeaf dot1dstpportpathcost; //type: int32
        ydk::YLeaf dot1dstpportdesignatedroot; //type: binary
        ydk::YLeaf dot1dstpportdesignatedcost; //type: int32
        ydk::YLeaf dot1dstpportdesignatedbridge; //type: binary
        ydk::YLeaf dot1dstpportdesignatedport; //type: binary
        ydk::YLeaf dot1dstpportforwardtransitions; //type: uint32
        ydk::YLeaf dot1dstpportpathcost32; //type: int32
        ydk::YLeaf stpxlongstpportpathcost; //type: uint32
        class Dot1dStpPortState;
        class Dot1dStpPortEnable;

}; // BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry


class BRIDGEMIB::Dot1dTpFdbTable : public ydk::Entity
{
    public:
        Dot1dTpFdbTable();
        ~Dot1dTpFdbTable();

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

        class Dot1dTpFdbEntry; //type: BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry

        ydk::YList dot1dtpfdbentry;
        
}; // BRIDGEMIB::Dot1dTpFdbTable


class BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry : public ydk::Entity
{
    public:
        Dot1dTpFdbEntry();
        ~Dot1dTpFdbEntry();

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

        ydk::YLeaf dot1dtpfdbaddress; //type: string
        ydk::YLeaf dot1dtpfdbport; //type: int32
        ydk::YLeaf dot1dtpfdbstatus; //type: Dot1dTpFdbStatus
        class Dot1dTpFdbStatus;

}; // BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry


class BRIDGEMIB::Dot1dTpPortTable : public ydk::Entity
{
    public:
        Dot1dTpPortTable();
        ~Dot1dTpPortTable();

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

        class Dot1dTpPortEntry; //type: BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry

        ydk::YList dot1dtpportentry;
        
}; // BRIDGEMIB::Dot1dTpPortTable


class BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry : public ydk::Entity
{
    public:
        Dot1dTpPortEntry();
        ~Dot1dTpPortEntry();

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

        ydk::YLeaf dot1dtpport; //type: int32
        ydk::YLeaf dot1dtpportmaxinfo; //type: int32
        ydk::YLeaf dot1dtpportinframes; //type: uint32
        ydk::YLeaf dot1dtpportoutframes; //type: uint32
        ydk::YLeaf dot1dtpportindiscards; //type: uint32

}; // BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry


class BRIDGEMIB::Dot1dStaticTable : public ydk::Entity
{
    public:
        Dot1dStaticTable();
        ~Dot1dStaticTable();

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

        class Dot1dStaticEntry; //type: BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry

        ydk::YList dot1dstaticentry;
        
}; // BRIDGEMIB::Dot1dStaticTable


class BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry : public ydk::Entity
{
    public:
        Dot1dStaticEntry();
        ~Dot1dStaticEntry();

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

        ydk::YLeaf dot1dstaticaddress; //type: string
        ydk::YLeaf dot1dstaticreceiveport; //type: int32
        ydk::YLeaf dot1dstaticallowedtogoto; //type: binary
        ydk::YLeaf dot1dstaticstatus; //type: Dot1dStaticStatus
        class Dot1dStaticStatus;

}; // BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry

class BRIDGEMIB::Dot1dBase::Dot1dBaseType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf transparent_only;
        static const ydk::Enum::YLeaf sourceroute_only;
        static const ydk::Enum::YLeaf srt;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "transparent-only") return 2;
            if (name == "sourceroute-only") return 3;
            if (name == "srt") return 4;
            return -1;
        }
};

class BRIDGEMIB::Dot1dStp::Dot1dStpProtocolSpecification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf decLb100;
        static const ydk::Enum::YLeaf ieee8021d;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "decLb100") return 2;
            if (name == "ieee8021d") return 3;
            return -1;
        }
};

class BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::Dot1qPortAcceptableFrameTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf admitAll;
        static const ydk::Enum::YLeaf admitOnlyVlanTagged;

        static int get_enum_value(const std::string & name) {
            if (name == "admitAll") return 1;
            if (name == "admitOnlyVlanTagged") return 2;
            return -1;
        }
};

class BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::Dot1dStpPortState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf blocking;
        static const ydk::Enum::YLeaf listening;
        static const ydk::Enum::YLeaf learning;
        static const ydk::Enum::YLeaf forwarding;
        static const ydk::Enum::YLeaf broken;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 1;
            if (name == "blocking") return 2;
            if (name == "listening") return 3;
            if (name == "learning") return 4;
            if (name == "forwarding") return 5;
            if (name == "broken") return 6;
            return -1;
        }
};

class BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::Dot1dStpPortEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::Dot1dTpFdbStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf learned;
        static const ydk::Enum::YLeaf self;
        static const ydk::Enum::YLeaf mgmt;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "invalid") return 2;
            if (name == "learned") return 3;
            if (name == "self") return 4;
            if (name == "mgmt") return 5;
            return -1;
        }
};

class BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::Dot1dStaticStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf deleteOnReset;
        static const ydk::Enum::YLeaf deleteOnTimeout;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "invalid") return 2;
            if (name == "permanent") return 3;
            if (name == "deleteOnReset") return 4;
            if (name == "deleteOnTimeout") return 5;
            return -1;
        }
};


}
}

#endif /* _BRIDGE_MIB_ */

