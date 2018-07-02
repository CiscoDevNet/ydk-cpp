#ifndef _ETHERLIKE_MIB_
#define _ETHERLIKE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace cisco_ios_xe {
namespace EtherLike_MIB {

class Dot3ErrorInitError : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot3ErrorInitError();
        ~Dot3ErrorInitError();


}; // Dot3ErrorInitError

class Dot3TestTdr : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot3TestTdr();
        ~Dot3TestTdr();


}; // Dot3TestTdr

class Dot3ErrorLoopbackError : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot3ErrorLoopbackError();
        ~Dot3ErrorLoopbackError();


}; // Dot3ErrorLoopbackError

class Dot3TestLoopBack : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot3TestLoopBack();
        ~Dot3TestLoopBack();


}; // Dot3TestLoopBack

class EtherLikeMIB : public ydk::Entity
{
    public:
        EtherLikeMIB();
        ~EtherLikeMIB();

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

        class Dot3StatsTable; //type: EtherLikeMIB::Dot3StatsTable
        class Dot3CollTable; //type: EtherLikeMIB::Dot3CollTable
        class Dot3ControlTable; //type: EtherLikeMIB::Dot3ControlTable
        class Dot3PauseTable; //type: EtherLikeMIB::Dot3PauseTable
        class Dot3HCStatsTable; //type: EtherLikeMIB::Dot3HCStatsTable

        std::shared_ptr<cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3StatsTable> dot3statstable;
        std::shared_ptr<cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3CollTable> dot3colltable;
        std::shared_ptr<cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3ControlTable> dot3controltable;
        std::shared_ptr<cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3PauseTable> dot3pausetable;
        std::shared_ptr<cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3HCStatsTable> dot3hcstatstable;
        
}; // EtherLikeMIB


class EtherLikeMIB::Dot3StatsTable : public ydk::Entity
{
    public:
        Dot3StatsTable();
        ~Dot3StatsTable();

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

        class Dot3StatsEntry; //type: EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry

        ydk::YList dot3statsentry;
        
}; // EtherLikeMIB::Dot3StatsTable


class EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry : public ydk::Entity
{
    public:
        Dot3StatsEntry();
        ~Dot3StatsEntry();

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

        ydk::YLeaf dot3statsindex; //type: int32
        ydk::YLeaf dot3statsalignmenterrors; //type: uint32
        ydk::YLeaf dot3statsfcserrors; //type: uint32
        ydk::YLeaf dot3statssinglecollisionframes; //type: uint32
        ydk::YLeaf dot3statsmultiplecollisionframes; //type: uint32
        ydk::YLeaf dot3statssqetesterrors; //type: uint32
        ydk::YLeaf dot3statsdeferredtransmissions; //type: uint32
        ydk::YLeaf dot3statslatecollisions; //type: uint32
        ydk::YLeaf dot3statsexcessivecollisions; //type: uint32
        ydk::YLeaf dot3statsinternalmactransmiterrors; //type: uint32
        ydk::YLeaf dot3statscarriersenseerrors; //type: uint32
        ydk::YLeaf dot3statsframetoolongs; //type: uint32
        ydk::YLeaf dot3statsinternalmacreceiveerrors; //type: uint32
        ydk::YLeaf dot3statsetherchipset; //type: string
        ydk::YLeaf dot3statssymbolerrors; //type: uint32
        ydk::YLeaf dot3statsduplexstatus; //type: Dot3StatsDuplexStatus
        ydk::YLeaf dot3statsratecontrolability; //type: boolean
        ydk::YLeaf dot3statsratecontrolstatus; //type: Dot3StatsRateControlStatus
        class Dot3StatsDuplexStatus;
        class Dot3StatsRateControlStatus;

}; // EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry


class EtherLikeMIB::Dot3CollTable : public ydk::Entity
{
    public:
        Dot3CollTable();
        ~Dot3CollTable();

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

        class Dot3CollEntry; //type: EtherLikeMIB::Dot3CollTable::Dot3CollEntry

        ydk::YList dot3collentry;
        
}; // EtherLikeMIB::Dot3CollTable


class EtherLikeMIB::Dot3CollTable::Dot3CollEntry : public ydk::Entity
{
    public:
        Dot3CollEntry();
        ~Dot3CollEntry();

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
        ydk::YLeaf dot3collcount; //type: int32
        ydk::YLeaf dot3collfrequencies; //type: uint32

}; // EtherLikeMIB::Dot3CollTable::Dot3CollEntry


class EtherLikeMIB::Dot3ControlTable : public ydk::Entity
{
    public:
        Dot3ControlTable();
        ~Dot3ControlTable();

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

        class Dot3ControlEntry; //type: EtherLikeMIB::Dot3ControlTable::Dot3ControlEntry

        ydk::YList dot3controlentry;
        
}; // EtherLikeMIB::Dot3ControlTable


class EtherLikeMIB::Dot3ControlTable::Dot3ControlEntry : public ydk::Entity
{
    public:
        Dot3ControlEntry();
        ~Dot3ControlEntry();

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

        //type: int32 (refers to cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::dot3statsindex)
        ydk::YLeaf dot3statsindex;
        ydk::YLeaf dot3controlfunctionssupported; //type: Dot3ControlFunctionsSupported
        ydk::YLeaf dot3controlinunknownopcodes; //type: uint32
        ydk::YLeaf dot3hccontrolinunknownopcodes; //type: uint64

}; // EtherLikeMIB::Dot3ControlTable::Dot3ControlEntry


class EtherLikeMIB::Dot3PauseTable : public ydk::Entity
{
    public:
        Dot3PauseTable();
        ~Dot3PauseTable();

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

        class Dot3PauseEntry; //type: EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry

        ydk::YList dot3pauseentry;
        
}; // EtherLikeMIB::Dot3PauseTable


class EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry : public ydk::Entity
{
    public:
        Dot3PauseEntry();
        ~Dot3PauseEntry();

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

        //type: int32 (refers to cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::dot3statsindex)
        ydk::YLeaf dot3statsindex;
        ydk::YLeaf dot3pauseadminmode; //type: Dot3PauseAdminMode
        ydk::YLeaf dot3pauseopermode; //type: Dot3PauseOperMode
        ydk::YLeaf dot3inpauseframes; //type: uint32
        ydk::YLeaf dot3outpauseframes; //type: uint32
        ydk::YLeaf dot3hcinpauseframes; //type: uint64
        ydk::YLeaf dot3hcoutpauseframes; //type: uint64
        class Dot3PauseAdminMode;
        class Dot3PauseOperMode;

}; // EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry


class EtherLikeMIB::Dot3HCStatsTable : public ydk::Entity
{
    public:
        Dot3HCStatsTable();
        ~Dot3HCStatsTable();

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

        class Dot3HCStatsEntry; //type: EtherLikeMIB::Dot3HCStatsTable::Dot3HCStatsEntry

        ydk::YList dot3hcstatsentry;
        
}; // EtherLikeMIB::Dot3HCStatsTable


class EtherLikeMIB::Dot3HCStatsTable::Dot3HCStatsEntry : public ydk::Entity
{
    public:
        Dot3HCStatsEntry();
        ~Dot3HCStatsEntry();

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

        //type: int32 (refers to cisco_ios_xe::EtherLike_MIB::EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::dot3statsindex)
        ydk::YLeaf dot3statsindex;
        ydk::YLeaf dot3hcstatsalignmenterrors; //type: uint64
        ydk::YLeaf dot3hcstatsfcserrors; //type: uint64
        ydk::YLeaf dot3hcstatsinternalmactransmiterrors; //type: uint64
        ydk::YLeaf dot3hcstatsframetoolongs; //type: uint64
        ydk::YLeaf dot3hcstatsinternalmacreceiveerrors; //type: uint64
        ydk::YLeaf dot3hcstatssymbolerrors; //type: uint64

}; // EtherLikeMIB::Dot3HCStatsTable::Dot3HCStatsEntry

class EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::Dot3StatsDuplexStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf halfDuplex;
        static const ydk::Enum::YLeaf fullDuplex;

};

class EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::Dot3StatsRateControlStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rateControlOff;
        static const ydk::Enum::YLeaf rateControlOn;
        static const ydk::Enum::YLeaf unknown;

};

class EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::Dot3PauseAdminMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabledXmit;
        static const ydk::Enum::YLeaf enabledRcv;
        static const ydk::Enum::YLeaf enabledXmitAndRcv;

};

class EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::Dot3PauseOperMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabledXmit;
        static const ydk::Enum::YLeaf enabledRcv;
        static const ydk::Enum::YLeaf enabledXmitAndRcv;

};


}
}

#endif /* _ETHERLIKE_MIB_ */

