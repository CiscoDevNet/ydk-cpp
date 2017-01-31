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


                YLeaf vrf_name; //type: string

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


                        YLeaf lsp_name; //type: string
                        YLeaf lsp_name_xr; //type: string

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


                            YLeaf label; //type: uint32
                            YLeaf label_mode; //type: MgmtMplsStaticLabelModeEnum
                            YLeaf label_status; //type: MgmtMplsStaticLabelStatusEnum
                            YLeaf vrf_name; //type: string

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


                                YLeaf prefix_length; //type: uint8

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


                                    YLeaf af_name; //type: MgmtStaticAddrEnum
                                    YLeaf ipv4_prefix; //type: string
                                    YLeaf ipv6_prefix; //type: string



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


                                YLeaf path; //type: uint32
                                YLeaf type; //type: MgmtStaticPathEnum
                                YLeaf next_hop_label_type; //type: MgmtStaticNhLblEnum
                                YLeaf next_hop_label; //type: uint32
                                YLeaf next_hop_interface_name; //type: string
                                YLeaf next_hop_ipv4_address_set; //type: boolean
                                YLeaf next_hop_ipv4_address; //type: string



                        }; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo> > path_info;
                            std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix> prefix;


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


                        YLeaf local_label_id; //type: uint32
                        YLeaf label; //type: uint32
                        YLeaf label_mode; //type: MgmtMplsStaticLabelModeEnum
                        YLeaf label_status; //type: MgmtMplsStaticLabelStatusEnum
                        YLeaf vrf_name; //type: string

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


                            YLeaf prefix_length; //type: uint8

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


                                YLeaf af_name; //type: MgmtStaticAddrEnum
                                YLeaf ipv4_prefix; //type: string
                                YLeaf ipv6_prefix; //type: string



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


                            YLeaf path; //type: uint32
                            YLeaf type; //type: MgmtStaticPathEnum
                            YLeaf next_hop_label_type; //type: MgmtStaticNhLblEnum
                            YLeaf next_hop_label; //type: uint32
                            YLeaf next_hop_interface_name; //type: string
                            YLeaf next_hop_ipv4_address_set; //type: boolean
                            YLeaf next_hop_ipv4_address; //type: string



                    }; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo


                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo> > path_info;
                        std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix> prefix;


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


            YLeaf label_count; //type: uint32
            YLeaf label_error_count; //type: uint32
            YLeaf label_discrepancy_count; //type: uint32
            YLeaf vrf_count; //type: uint32
            YLeaf active_vrf_count; //type: uint32
            YLeaf interface_count; //type: uint32
            YLeaf interface_foward_reference_count; //type: uint32
            YLeaf mpls_enabled_interface_count; //type: uint32
            YLeaf lsd_connected; //type: boolean
            YLeaf im_connected; //type: boolean
            YLeaf rsi_connected; //type: boolean



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


                YLeaf local_label_id; //type: uint32
                YLeaf label; //type: uint32
                YLeaf label_mode; //type: MgmtMplsStaticLabelModeEnum
                YLeaf label_status; //type: MgmtMplsStaticLabelStatusEnum
                YLeaf vrf_name; //type: string

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


                    YLeaf prefix_length; //type: uint8

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


                        YLeaf af_name; //type: MgmtStaticAddrEnum
                        YLeaf ipv4_prefix; //type: string
                        YLeaf ipv6_prefix; //type: string



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


                    YLeaf path; //type: uint32
                    YLeaf type; //type: MgmtStaticPathEnum
                    YLeaf next_hop_label_type; //type: MgmtStaticNhLblEnum
                    YLeaf next_hop_label; //type: uint32
                    YLeaf next_hop_interface_name; //type: string
                    YLeaf next_hop_ipv4_address_set; //type: boolean
                    YLeaf next_hop_ipv4_address; //type: string



            }; // MplsStatic::LocalLabels::LocalLabel::PathInfo


                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::PathInfo> > path_info;
                std::unique_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::Prefix> prefix;


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
        static const Enum::YLeaf not_created;
        static const Enum::YLeaf vrf_down;
        static const Enum::YLeaf rewrite_vrf_down;
        static const Enum::YLeaf lsd_disconnected;
        static const Enum::YLeaf lsd_failed;
        static const Enum::YLeaf wait_for_lsd_reply;
        static const Enum::YLeaf label_created;
        static const Enum::YLeaf label_create_failed;
        static const Enum::YLeaf label_rewrite_failed;
        static const Enum::YLeaf rewrite_next_hop_interface_missing;
        static const Enum::YLeaf label_discrepancy;
        static const Enum::YLeaf rewrite_discrepancy;
        static const Enum::YLeaf label_status_unknown;

};

class MgmtStaticPathEnum : public Enum
{
    public:
        static const Enum::YLeaf cross_connect_path;
        static const Enum::YLeaf pop_lookup_path;

};

class MgmtStaticNhLblEnum : public Enum
{
    public:
        static const Enum::YLeaf out_label;
        static const Enum::YLeaf out_pop;
        static const Enum::YLeaf out_explicit_null;

};

class MgmtStaticAddrEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class MgmtMplsStaticLabelModeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf per_prefix;
        static const Enum::YLeaf per_vrf;
        static const Enum::YLeaf cross_connect;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_STATIC_OPER_ */

