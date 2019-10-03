#ifndef _CISCO_ENTITY_QFP_MIB_
#define _CISCO_ENTITY_QFP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ENTITY_QFP_MIB {

class CISCOENTITYQFPMIB : public ydk::Entity
{
    public:
        CISCOENTITYQFPMIB();
        ~CISCOENTITYQFPMIB();

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

        class CiscoEntityQfp; //type: CISCOENTITYQFPMIB::CiscoEntityQfp
        class CiscoEntityQfpNotif; //type: CISCOENTITYQFPMIB::CiscoEntityQfpNotif
        class CeqfpSystemTable; //type: CISCOENTITYQFPMIB::CeqfpSystemTable
        class CeqfpUtilizationTable; //type: CISCOENTITYQFPMIB::CeqfpUtilizationTable
        class CeqfpMemoryResourceTable; //type: CISCOENTITYQFPMIB::CeqfpMemoryResourceTable
        class CeqfpThroughputTable; //type: CISCOENTITYQFPMIB::CeqfpThroughputTable

        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_QFP_MIB::CISCOENTITYQFPMIB::CiscoEntityQfp> ciscoentityqfp;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_QFP_MIB::CISCOENTITYQFPMIB::CiscoEntityQfpNotif> ciscoentityqfpnotif;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_QFP_MIB::CISCOENTITYQFPMIB::CeqfpSystemTable> ceqfpsystemtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_QFP_MIB::CISCOENTITYQFPMIB::CeqfpUtilizationTable> ceqfputilizationtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_QFP_MIB::CISCOENTITYQFPMIB::CeqfpMemoryResourceTable> ceqfpmemoryresourcetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_QFP_MIB::CISCOENTITYQFPMIB::CeqfpThroughputTable> ceqfpthroughputtable;
        
}; // CISCOENTITYQFPMIB


class CISCOENTITYQFPMIB::CiscoEntityQfp : public ydk::Entity
{
    public:
        CiscoEntityQfp();
        ~CiscoEntityQfp();

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

        ydk::YLeaf ceqfpfivesecondutilalgo; //type: CeqfpFiveSecondUtilAlgo
        ydk::YLeaf ceqfponeminuteutilalgo; //type: CeqfpOneMinuteUtilAlgo
        ydk::YLeaf ceqfpfiveminutesutilalgo; //type: CeqfpFiveMinutesUtilAlgo
        ydk::YLeaf ceqfpsixtyminutesutilalgo; //type: CeqfpSixtyMinutesUtilAlgo
        class CeqfpFiveSecondUtilAlgo;
        class CeqfpOneMinuteUtilAlgo;
        class CeqfpFiveMinutesUtilAlgo;
        class CeqfpSixtyMinutesUtilAlgo;

}; // CISCOENTITYQFPMIB::CiscoEntityQfp


class CISCOENTITYQFPMIB::CiscoEntityQfpNotif : public ydk::Entity
{
    public:
        CiscoEntityQfpNotif();
        ~CiscoEntityQfpNotif();

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

        ydk::YLeaf ceqfpmemoryresthreshnotifenabled; //type: boolean
        ydk::YLeaf ceqfpthroughputnotifenabled; //type: uint32

}; // CISCOENTITYQFPMIB::CiscoEntityQfpNotif


class CISCOENTITYQFPMIB::CeqfpSystemTable : public ydk::Entity
{
    public:
        CeqfpSystemTable();
        ~CeqfpSystemTable();

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

        class CeqfpSystemEntry; //type: CISCOENTITYQFPMIB::CeqfpSystemTable::CeqfpSystemEntry

        ydk::YList ceqfpsystementry;
        
}; // CISCOENTITYQFPMIB::CeqfpSystemTable


class CISCOENTITYQFPMIB::CeqfpSystemTable::CeqfpSystemEntry : public ydk::Entity
{
    public:
        CeqfpSystemEntry();
        ~CeqfpSystemEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceqfpsystemtrafficdirection; //type: CeqfpSystemTrafficDirection
        ydk::YLeaf ceqfpsystemstate; //type: CeqfpSystemState
        ydk::YLeaf ceqfpnumbersystemloads; //type: uint32
        ydk::YLeaf ceqfpsystemlastloadtime; //type: string
        class CeqfpSystemTrafficDirection;
        class CeqfpSystemState;

}; // CISCOENTITYQFPMIB::CeqfpSystemTable::CeqfpSystemEntry


class CISCOENTITYQFPMIB::CeqfpUtilizationTable : public ydk::Entity
{
    public:
        CeqfpUtilizationTable();
        ~CeqfpUtilizationTable();

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

        class CeqfpUtilizationEntry; //type: CISCOENTITYQFPMIB::CeqfpUtilizationTable::CeqfpUtilizationEntry

        ydk::YList ceqfputilizationentry;
        
}; // CISCOENTITYQFPMIB::CeqfpUtilizationTable


class CISCOENTITYQFPMIB::CeqfpUtilizationTable::CeqfpUtilizationEntry : public ydk::Entity
{
    public:
        CeqfpUtilizationEntry();
        ~CeqfpUtilizationEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceqfputiltimeinterval; //type: CiscoQfpTimeInterval
        ydk::YLeaf ceqfputilinputprioritypktrate; //type: uint64
        ydk::YLeaf ceqfputilinputprioritybitrate; //type: uint64
        ydk::YLeaf ceqfputilinputnonprioritypktrate; //type: uint64
        ydk::YLeaf ceqfputilinputnonprioritybitrate; //type: uint64
        ydk::YLeaf ceqfputilinputtotalpktrate; //type: uint64
        ydk::YLeaf ceqfputilinputtotalbitrate; //type: uint64
        ydk::YLeaf ceqfputiloutputprioritypktrate; //type: uint64
        ydk::YLeaf ceqfputiloutputprioritybitrate; //type: uint64
        ydk::YLeaf ceqfputiloutputnonprioritypktrate; //type: uint64
        ydk::YLeaf ceqfputiloutputnonprioritybitrate; //type: uint64
        ydk::YLeaf ceqfputiloutputtotalpktrate; //type: uint64
        ydk::YLeaf ceqfputiloutputtotalbitrate; //type: uint64
        ydk::YLeaf ceqfputilprocessingload; //type: uint32

}; // CISCOENTITYQFPMIB::CeqfpUtilizationTable::CeqfpUtilizationEntry


class CISCOENTITYQFPMIB::CeqfpMemoryResourceTable : public ydk::Entity
{
    public:
        CeqfpMemoryResourceTable();
        ~CeqfpMemoryResourceTable();

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

        class CeqfpMemoryResourceEntry; //type: CISCOENTITYQFPMIB::CeqfpMemoryResourceTable::CeqfpMemoryResourceEntry

        ydk::YList ceqfpmemoryresourceentry;
        
}; // CISCOENTITYQFPMIB::CeqfpMemoryResourceTable


class CISCOENTITYQFPMIB::CeqfpMemoryResourceTable::CeqfpMemoryResourceEntry : public ydk::Entity
{
    public:
        CeqfpMemoryResourceEntry();
        ~CeqfpMemoryResourceEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceqfpmemoryrestype; //type: CiscoQfpMemoryResource
        ydk::YLeaf ceqfpmemoryrestotal; //type: uint32
        ydk::YLeaf ceqfpmemoryresinuse; //type: uint32
        ydk::YLeaf ceqfpmemoryresfree; //type: uint32
        ydk::YLeaf ceqfpmemoryreslowfreewatermark; //type: uint32
        ydk::YLeaf ceqfpmemoryresrisingthreshold; //type: uint32
        ydk::YLeaf ceqfpmemoryresfallingthreshold; //type: uint32
        ydk::YLeaf ceqfpmemoryrestotalovrflw; //type: uint32
        ydk::YLeaf ceqfpmemoryhcrestotal; //type: uint64
        ydk::YLeaf ceqfpmemoryresinuseovrflw; //type: uint32
        ydk::YLeaf ceqfpmemoryhcresinuse; //type: uint64
        ydk::YLeaf ceqfpmemoryresfreeovrflw; //type: uint32
        ydk::YLeaf ceqfpmemoryhcresfree; //type: uint64
        ydk::YLeaf ceqfpmemoryreslowfreewatermarkovrflw; //type: uint32
        ydk::YLeaf ceqfpmemoryhcreslowfreewatermark; //type: uint64

}; // CISCOENTITYQFPMIB::CeqfpMemoryResourceTable::CeqfpMemoryResourceEntry


class CISCOENTITYQFPMIB::CeqfpThroughputTable : public ydk::Entity
{
    public:
        CeqfpThroughputTable();
        ~CeqfpThroughputTable();

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

        class CeqfpThroughputEntry; //type: CISCOENTITYQFPMIB::CeqfpThroughputTable::CeqfpThroughputEntry

        ydk::YList ceqfpthroughputentry;
        
}; // CISCOENTITYQFPMIB::CeqfpThroughputTable


class CISCOENTITYQFPMIB::CeqfpThroughputTable::CeqfpThroughputEntry : public ydk::Entity
{
    public:
        CeqfpThroughputEntry();
        ~CeqfpThroughputEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceqfpthroughputlicensedbw; //type: uint64
        ydk::YLeaf ceqfpthroughputlevel; //type: CeqfpThroughputLevel
        ydk::YLeaf ceqfpthroughputinterval; //type: int32
        ydk::YLeaf ceqfpthroughputthreshold; //type: int32
        ydk::YLeaf ceqfpthroughputavgrate; //type: uint64
        class CeqfpThroughputLevel;

}; // CISCOENTITYQFPMIB::CeqfpThroughputTable::CeqfpThroughputEntry

class CiscoQfpTimeInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fiveSeconds;
        static const ydk::Enum::YLeaf oneMinute;
        static const ydk::Enum::YLeaf fiveMinutes;
        static const ydk::Enum::YLeaf sixtyMinutes;

        static int get_enum_value(const std::string & name) {
            if (name == "fiveSeconds") return 1;
            if (name == "oneMinute") return 2;
            if (name == "fiveMinutes") return 3;
            if (name == "sixtyMinutes") return 4;
            return -1;
        }
};

class CiscoQfpMemoryResource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dram;

        static int get_enum_value(const std::string & name) {
            if (name == "dram") return 1;
            return -1;
        }
};

class CISCOENTITYQFPMIB::CiscoEntityQfp::CeqfpFiveSecondUtilAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf fiveSecSample;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "fiveSecSample") return 2;
            return -1;
        }
};

class CISCOENTITYQFPMIB::CiscoEntityQfp::CeqfpOneMinuteUtilAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf fiveSecSMA;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "fiveSecSMA") return 2;
            return -1;
        }
};

class CISCOENTITYQFPMIB::CiscoEntityQfp::CeqfpFiveMinutesUtilAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf fiveSecSMA;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "fiveSecSMA") return 2;
            return -1;
        }
};

class CISCOENTITYQFPMIB::CiscoEntityQfp::CeqfpSixtyMinutesUtilAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf fiveSecSMA;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "fiveSecSMA") return 2;
            return -1;
        }
};

class CISCOENTITYQFPMIB::CeqfpSystemTable::CeqfpSystemEntry::CeqfpSystemTrafficDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ingress;
        static const ydk::Enum::YLeaf egress;
        static const ydk::Enum::YLeaf both;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "ingress") return 2;
            if (name == "egress") return 3;
            if (name == "both") return 4;
            return -1;
        }
};

class CISCOENTITYQFPMIB::CeqfpSystemTable::CeqfpSystemEntry::CeqfpSystemState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf activeSolo;
        static const ydk::Enum::YLeaf standby;
        static const ydk::Enum::YLeaf hotStandby;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "reset") return 2;
            if (name == "init") return 3;
            if (name == "active") return 4;
            if (name == "activeSolo") return 5;
            if (name == "standby") return 6;
            if (name == "hotStandby") return 7;
            return -1;
        }
};

class CISCOENTITYQFPMIB::CeqfpThroughputTable::CeqfpThroughputEntry::CeqfpThroughputLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf exceed;

        static int get_enum_value(const std::string & name) {
            if (name == "normal") return 1;
            if (name == "warning") return 2;
            if (name == "exceed") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_ENTITY_QFP_MIB_ */

