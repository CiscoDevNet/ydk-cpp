#ifndef _CISCO_IETF_PW_TDM_MIB_
#define _CISCO_IETF_PW_TDM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_PW_TDM_MIB {

class CISCOIETFPWTDMMIB : public ydk::Entity
{
    public:
        CISCOIETFPWTDMMIB();
        ~CISCOIETFPWTDMMIB();

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

        class CpwCTDMObjects; //type: CISCOIETFPWTDMMIB::CpwCTDMObjects
        class CpwCTDMTable; //type: CISCOIETFPWTDMMIB::CpwCTDMTable
        class CpwCTDMCfgTable; //type: CISCOIETFPWTDMMIB::CpwCTDMCfgTable
        class CpwCTDMPerfCurrentTable; //type: CISCOIETFPWTDMMIB::CpwCTDMPerfCurrentTable
        class CpwCTDMPerfIntervalTable; //type: CISCOIETFPWTDMMIB::CpwCTDMPerfIntervalTable
        class CpwCTDMPerf1DayIntervalTable; //type: CISCOIETFPWTDMMIB::CpwCTDMPerf1DayIntervalTable

        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_TDM_MIB::CISCOIETFPWTDMMIB::CpwCTDMObjects> cpwctdmobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_TDM_MIB::CISCOIETFPWTDMMIB::CpwCTDMTable> cpwctdmtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_TDM_MIB::CISCOIETFPWTDMMIB::CpwCTDMCfgTable> cpwctdmcfgtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_TDM_MIB::CISCOIETFPWTDMMIB::CpwCTDMPerfCurrentTable> cpwctdmperfcurrenttable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_TDM_MIB::CISCOIETFPWTDMMIB::CpwCTDMPerfIntervalTable> cpwctdmperfintervaltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_TDM_MIB::CISCOIETFPWTDMMIB::CpwCTDMPerf1DayIntervalTable> cpwctdmperf1dayintervaltable;
        
}; // CISCOIETFPWTDMMIB


class CISCOIETFPWTDMMIB::CpwCTDMObjects : public ydk::Entity
{
    public:
        CpwCTDMObjects();
        ~CpwCTDMObjects();

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

        ydk::YLeaf cpwctdmcfgindexnext; //type: uint32

}; // CISCOIETFPWTDMMIB::CpwCTDMObjects


class CISCOIETFPWTDMMIB::CpwCTDMTable : public ydk::Entity
{
    public:
        CpwCTDMTable();
        ~CpwCTDMTable();

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

        class CpwCTDMEntry; //type: CISCOIETFPWTDMMIB::CpwCTDMTable::CpwCTDMEntry

        ydk::YList cpwctdmentry;
        
}; // CISCOIETFPWTDMMIB::CpwCTDMTable


class CISCOIETFPWTDMMIB::CpwCTDMTable::CpwCTDMEntry : public ydk::Entity
{
    public:
        CpwCTDMEntry();
        ~CpwCTDMEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcTable::CpwVcEntry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwctdmrate; //type: int32
        ydk::YLeaf cpwctdmifindex; //type: int32
        ydk::YLeaf cpwcgentdmcfgindex; //type: uint32
        ydk::YLeaf cpwcreltdmcfgindex; //type: uint32
        ydk::YLeaf cpwctdmconfigerror; //type: CpwCTDMConfigError
        ydk::YLeaf cpwctdmtimeelapsed; //type: int32
        ydk::YLeaf cpwctdmvalidintervals; //type: int32
        ydk::YLeaf cpwctdmvaliddayintervals; //type: int32
        ydk::YLeaf cpwctdmcurrentindications; //type: CpwCTDMCurrentIndications
        ydk::YLeaf cpwctdmlatchedindications; //type: CpwCTDMLatchedIndications
        ydk::YLeaf cpwctdmlastestimestamp; //type: uint32

}; // CISCOIETFPWTDMMIB::CpwCTDMTable::CpwCTDMEntry


class CISCOIETFPWTDMMIB::CpwCTDMCfgTable : public ydk::Entity
{
    public:
        CpwCTDMCfgTable();
        ~CpwCTDMCfgTable();

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

        class CpwCTDMCfgEntry; //type: CISCOIETFPWTDMMIB::CpwCTDMCfgTable::CpwCTDMCfgEntry

        ydk::YList cpwctdmcfgentry;
        
}; // CISCOIETFPWTDMMIB::CpwCTDMCfgTable


class CISCOIETFPWTDMMIB::CpwCTDMCfgTable::CpwCTDMCfgEntry : public ydk::Entity
{
    public:
        CpwCTDMCfgEntry();
        ~CpwCTDMCfgEntry();

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

        ydk::YLeaf cpwctdmcfgindex; //type: uint32
        ydk::YLeaf cpwctdmcfgconferr; //type: CpwCTDMCfgConfErr
        ydk::YLeaf cpwctdmcfgpayloadsize; //type: uint32
        ydk::YLeaf cpwctdmcfgpktreorder; //type: boolean
        ydk::YLeaf cpwctdmcfgrtphdrused; //type: boolean
        ydk::YLeaf cpwctdmcfgjtrbfrdepth; //type: uint32
        ydk::YLeaf cpwctdmcfgpayloadsuppression; //type: CpwCTDMCfgPayloadSuppression
        ydk::YLeaf cpwctdmcfgconsecpktsinsynch; //type: uint32
        ydk::YLeaf cpwctdmcfgconsecmisspktsoutsynch; //type: uint32
        ydk::YLeaf cpwctdmcfgsetup2synchtimeout; //type: uint32
        ydk::YLeaf cpwctdmcfgpktreplacepolicy; //type: CpwCTDMCfgPktReplacePolicy
        ydk::YLeaf cpwctdmcfgavepktlosstimewindow; //type: int32
        ydk::YLeaf cpwctdmcfgexcessivepktlossthreshold; //type: uint32
        ydk::YLeaf cpwctdmcfgalarmthreshold; //type: uint32
        ydk::YLeaf cpwctdmcfgclearalarmthreshold; //type: uint32
        ydk::YLeaf cpwctdmcfgmissingpktstoses; //type: uint32
        ydk::YLeaf cpwctdmcfgtimestampmode; //type: CpwCTDMCfgTimestampMode
        ydk::YLeaf cpwctdmcfgstoragetype; //type: StorageType
        ydk::YLeaf cpwctdmcfgrowstatus; //type: RowStatus
        class CpwCTDMCfgPayloadSuppression;
        class CpwCTDMCfgPktReplacePolicy;
        class CpwCTDMCfgTimestampMode;

}; // CISCOIETFPWTDMMIB::CpwCTDMCfgTable::CpwCTDMCfgEntry


class CISCOIETFPWTDMMIB::CpwCTDMPerfCurrentTable : public ydk::Entity
{
    public:
        CpwCTDMPerfCurrentTable();
        ~CpwCTDMPerfCurrentTable();

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

        class CpwCTDMPerfCurrentEntry; //type: CISCOIETFPWTDMMIB::CpwCTDMPerfCurrentTable::CpwCTDMPerfCurrentEntry

        ydk::YList cpwctdmperfcurrententry;
        
}; // CISCOIETFPWTDMMIB::CpwCTDMPerfCurrentTable


class CISCOIETFPWTDMMIB::CpwCTDMPerfCurrentTable::CpwCTDMPerfCurrentEntry : public ydk::Entity
{
    public:
        CpwCTDMPerfCurrentEntry();
        ~CpwCTDMPerfCurrentEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcTable::CpwVcEntry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwctdmperfcurrentmissingpkts; //type: uint32
        ydk::YLeaf cpwctdmperfcurrentpktsreorder; //type: uint32
        ydk::YLeaf cpwctdmperfcurrentjtrbfrunderruns; //type: uint32
        ydk::YLeaf cpwctdmperfcurrentmisorderdropped; //type: uint32
        ydk::YLeaf cpwctdmperfcurrentmalformedpkt; //type: uint32
        ydk::YLeaf cpwctdmperfcurrentess; //type: uint32
        ydk::YLeaf cpwctdmperfcurrentsess; //type: uint32
        ydk::YLeaf cpwctdmperfcurrentuass; //type: uint32
        ydk::YLeaf cpwctdmperfcurrentfc; //type: uint32

}; // CISCOIETFPWTDMMIB::CpwCTDMPerfCurrentTable::CpwCTDMPerfCurrentEntry


class CISCOIETFPWTDMMIB::CpwCTDMPerfIntervalTable : public ydk::Entity
{
    public:
        CpwCTDMPerfIntervalTable();
        ~CpwCTDMPerfIntervalTable();

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

        class CpwCTDMPerfIntervalEntry; //type: CISCOIETFPWTDMMIB::CpwCTDMPerfIntervalTable::CpwCTDMPerfIntervalEntry

        ydk::YList cpwctdmperfintervalentry;
        
}; // CISCOIETFPWTDMMIB::CpwCTDMPerfIntervalTable


class CISCOIETFPWTDMMIB::CpwCTDMPerfIntervalTable::CpwCTDMPerfIntervalEntry : public ydk::Entity
{
    public:
        CpwCTDMPerfIntervalEntry();
        ~CpwCTDMPerfIntervalEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcTable::CpwVcEntry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwctdmperfintervalnumber; //type: uint32
        ydk::YLeaf cpwctdmperfintervalvaliddata; //type: boolean
        ydk::YLeaf cpwctdmperfintervalduration; //type: uint32
        ydk::YLeaf cpwctdmperfintervalmissingpkts; //type: uint32
        ydk::YLeaf cpwctdmperfintervalpktsreorder; //type: uint32
        ydk::YLeaf cpwctdmperfintervaljtrbfrunderruns; //type: uint32
        ydk::YLeaf cpwctdmperfintervalmisorderdropped; //type: uint32
        ydk::YLeaf cpwctdmperfintervalmalformedpkt; //type: uint32
        ydk::YLeaf cpwctdmperfintervaless; //type: uint32
        ydk::YLeaf cpwctdmperfintervalsess; //type: uint32
        ydk::YLeaf cpwctdmperfintervaluass; //type: uint32
        ydk::YLeaf cpwctdmperfintervalfc; //type: uint32

}; // CISCOIETFPWTDMMIB::CpwCTDMPerfIntervalTable::CpwCTDMPerfIntervalEntry


class CISCOIETFPWTDMMIB::CpwCTDMPerf1DayIntervalTable : public ydk::Entity
{
    public:
        CpwCTDMPerf1DayIntervalTable();
        ~CpwCTDMPerf1DayIntervalTable();

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

        class CpwCTDMPerf1DayIntervalEntry; //type: CISCOIETFPWTDMMIB::CpwCTDMPerf1DayIntervalTable::CpwCTDMPerf1DayIntervalEntry

        ydk::YList cpwctdmperf1dayintervalentry;
        
}; // CISCOIETFPWTDMMIB::CpwCTDMPerf1DayIntervalTable


class CISCOIETFPWTDMMIB::CpwCTDMPerf1DayIntervalTable::CpwCTDMPerf1DayIntervalEntry : public ydk::Entity
{
    public:
        CpwCTDMPerf1DayIntervalEntry();
        ~CpwCTDMPerf1DayIntervalEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::CpwVcTable::CpwVcEntry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwctdmperf1dayintervalnumber; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervalvaliddata; //type: boolean
        ydk::YLeaf cpwctdmperf1dayintervalduration; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervalmissingpkts; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervalpktsreorder; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervaljtrbfrunderruns; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervalmisorderdropped; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervalmalformedpkt; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervaless; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervalsess; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervaluass; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervalfc; //type: uint32

}; // CISCOIETFPWTDMMIB::CpwCTDMPerf1DayIntervalTable::CpwCTDMPerf1DayIntervalEntry

class CISCOIETFPWTDMMIB::CpwCTDMCfgTable::CpwCTDMCfgEntry::CpwCTDMCfgPayloadSuppression : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class CISCOIETFPWTDMMIB::CpwCTDMCfgTable::CpwCTDMCfgEntry::CpwCTDMCfgPktReplacePolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ais;
        static const ydk::Enum::YLeaf implementationSpecific;

};

class CISCOIETFPWTDMMIB::CpwCTDMCfgTable::CpwCTDMCfgEntry::CpwCTDMCfgTimestampMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf differential;

};


}
}

#endif /* _CISCO_IETF_PW_TDM_MIB_ */

