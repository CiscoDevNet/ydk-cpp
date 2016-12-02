#ifndef _CISCO_IOS_XR_MPLS_STATIC_OPER_
#define _CISCO_IOS_XR_MPLS_STATIC_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_static_oper {

class MplsStatic : public Entity
{
    public:
        MplsStatic();
        ~MplsStatic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Vrfs : public Entity
    {
        public:
            Vrfs();
            ~Vrfs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Vrf : public Entity
        {
            public:
                Vrf();
                ~Vrf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value vrf_name; //type: string


            class Lsps : public Entity
            {
                public:
                    Lsps();
                    ~Lsps();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Lsp : public Entity
                {
                    public:
                        Lsp();
                        ~Lsp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value lsp_name; //type: string
                        Value lsp_name_xr; //type: string


                    class Label : public Entity
                    {
                        public:
                            Label();
                            ~Label();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value label; //type: uint32
                            Value label_mode; //type: MgmtMplsStaticLabelModeEnum
                            Value label_status; //type: MgmtMplsStaticLabelStatusEnum
                            Value vrf_name; //type: string


                        class Prefix : public Entity
                        {
                            public:
                                Prefix();
                                ~Prefix();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value prefix_length; //type: uint8


                            class Prefix_ : public Entity
                            {
                                public:
                                    Prefix_();
                                    ~Prefix_();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value af_name; //type: MgmtStaticAddrEnum
                                    Value ipv4_prefix; //type: string
                                    Value ipv6_prefix; //type: string


                                    class MgmtStaticAddrEnum;


                            }; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_


                                std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_> prefix;


                        }; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix


                        class PathInfo : public Entity
                        {
                            public:
                                PathInfo();
                                ~PathInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value path; //type: uint32
                                Value type; //type: MgmtStaticPathEnum
                                Value next_hop_label_type; //type: MgmtStaticNhLblEnum
                                Value next_hop_label; //type: uint32
                                Value next_hop_interface_name; //type: string
                                Value next_hop_ipv4_address_set; //type: boolean
                                Value next_hop_ipv4_address; //type: string


                                class MgmtStaticNhLblEnum;
                                class MgmtStaticPathEnum;


                        }; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo> > path_info;
                            std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix> prefix;
                            class MgmtMplsStaticLabelModeEnum;
                            class MgmtMplsStaticLabelStatusEnum;


                    }; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label


                        std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label> label;


                }; // MplsStatic::Vrfs::Vrf::Lsps::Lsp


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp> > lsp;


            }; // MplsStatic::Vrfs::Vrf::Lsps


            class LocalLabels : public Entity
            {
                public:
                    LocalLabels();
                    ~LocalLabels();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class LocalLabel : public Entity
                {
                    public:
                        LocalLabel();
                        ~LocalLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value local_label_id; //type: uint32
                        Value label; //type: uint32
                        Value label_mode; //type: MgmtMplsStaticLabelModeEnum
                        Value label_status; //type: MgmtMplsStaticLabelStatusEnum
                        Value vrf_name; //type: string


                    class Prefix : public Entity
                    {
                        public:
                            Prefix();
                            ~Prefix();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value prefix_length; //type: uint8


                        class Prefix_ : public Entity
                        {
                            public:
                                Prefix_();
                                ~Prefix_();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value af_name; //type: MgmtStaticAddrEnum
                                Value ipv4_prefix; //type: string
                                Value ipv6_prefix; //type: string


                                class MgmtStaticAddrEnum;


                        }; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_


                            std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_> prefix;


                    }; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix


                    class PathInfo : public Entity
                    {
                        public:
                            PathInfo();
                            ~PathInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value type; //type: MgmtStaticPathEnum
                            Value next_hop_label_type; //type: MgmtStaticNhLblEnum
                            Value next_hop_label; //type: uint32
                            Value next_hop_interface_name; //type: string
                            Value next_hop_ipv4_address_set; //type: boolean
                            Value next_hop_ipv4_address; //type: string


                            class MgmtStaticNhLblEnum;
                            class MgmtStaticPathEnum;


                    }; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo


                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo> > path_info;
                        std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix> prefix;
                        class MgmtMplsStaticLabelModeEnum;
                        class MgmtMplsStaticLabelStatusEnum;


                }; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel> > local_label;


            }; // MplsStatic::Vrfs::Vrf::LocalLabels


                std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels> local_labels;
                std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps> lsps;


        }; // MplsStatic::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf> > vrf;


    }; // MplsStatic::Vrfs


    class Summary : public Entity
    {
        public:
            Summary();
            ~Summary();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value label_count; //type: uint32
            Value label_error_count; //type: uint32
            Value label_discrepancy_count; //type: uint32
            Value vrf_count; //type: uint32
            Value active_vrf_count; //type: uint32
            Value interface_count; //type: uint32
            Value interface_foward_reference_count; //type: uint32
            Value mpls_enabled_interface_count; //type: uint32
            Value lsd_connected; //type: boolean
            Value im_connected; //type: boolean
            Value rsi_connected; //type: boolean




    }; // MplsStatic::Summary


    class LocalLabels : public Entity
    {
        public:
            LocalLabels();
            ~LocalLabels();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class LocalLabel : public Entity
        {
            public:
                LocalLabel();
                ~LocalLabel();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value local_label_id; //type: uint32
                Value label; //type: uint32
                Value label_mode; //type: MgmtMplsStaticLabelModeEnum
                Value label_status; //type: MgmtMplsStaticLabelStatusEnum
                Value vrf_name; //type: string


            class Prefix : public Entity
            {
                public:
                    Prefix();
                    ~Prefix();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value prefix_length; //type: uint8


                class Prefix_ : public Entity
                {
                    public:
                        Prefix_();
                        ~Prefix_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value af_name; //type: MgmtStaticAddrEnum
                        Value ipv4_prefix; //type: string
                        Value ipv6_prefix; //type: string


                        class MgmtStaticAddrEnum;


                }; // MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_


                    std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_> prefix;


            }; // MplsStatic::LocalLabels::LocalLabel::Prefix


            class PathInfo : public Entity
            {
                public:
                    PathInfo();
                    ~PathInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value path; //type: uint32
                    Value type; //type: MgmtStaticPathEnum
                    Value next_hop_label_type; //type: MgmtStaticNhLblEnum
                    Value next_hop_label; //type: uint32
                    Value next_hop_interface_name; //type: string
                    Value next_hop_ipv4_address_set; //type: boolean
                    Value next_hop_ipv4_address; //type: string


                    class MgmtStaticNhLblEnum;
                    class MgmtStaticPathEnum;


            }; // MplsStatic::LocalLabels::LocalLabel::PathInfo


                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::PathInfo> > path_info;
                std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::Prefix> prefix;
                class MgmtMplsStaticLabelModeEnum;
                class MgmtMplsStaticLabelStatusEnum;


        }; // MplsStatic::LocalLabels::LocalLabel


            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel> > local_label;


    }; // MplsStatic::LocalLabels


        std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels> local_labels;
        std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Summary> summary;
        std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs> vrfs;


}; // MplsStatic


class MgmtMplsStaticLabelStatusEnum : public Enum
{
    public:
        static const Enum::Value not_created;
        static const Enum::Value vrf_down;
        static const Enum::Value rewrite_vrf_down;
        static const Enum::Value lsd_disconnected;
        static const Enum::Value lsd_failed;
        static const Enum::Value wait_for_lsd_reply;
        static const Enum::Value label_created;
        static const Enum::Value label_create_failed;
        static const Enum::Value label_rewrite_failed;
        static const Enum::Value rewrite_next_hop_interface_missing;
        static const Enum::Value label_discrepancy;
        static const Enum::Value rewrite_discrepancy;
        static const Enum::Value label_status_unknown;

};

class MgmtStaticPathEnum : public Enum
{
    public:
        static const Enum::Value cross_connect_path;
        static const Enum::Value pop_lookup_path;

};

class MgmtStaticNhLblEnum : public Enum
{
    public:
        static const Enum::Value out_label;
        static const Enum::Value out_pop;
        static const Enum::Value out_explicit_null;

};

class MgmtStaticAddrEnum : public Enum
{
    public:
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;

};

class MgmtMplsStaticLabelModeEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value per_prefix;
        static const Enum::Value per_vrf;
        static const Enum::Value cross_connect;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_STATIC_OPER_ */

